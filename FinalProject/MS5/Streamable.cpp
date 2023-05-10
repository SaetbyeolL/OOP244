/*************************************************************
 Final Project Milestone 5
 Module: Streamable
 File:  Streamable.cpp
 Version: 1.0
 Date: 2022/8/7
 Author: Saetbyeol Lim
 Revision History
 -------------------------------------------------------------
 Name            Date            Reason
 -------------------------------------------------------------
 -------------------------------------------------------------
 I have done all the coding by myself and only copied the code
 that my professor provided to complete my project milestones.
**************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include "Streamable.h"

namespace sdds {
	std::ostream& operator<<(std::ostream& os, const Streamable& s) {
		if (s) {
			s.write(os);
		}
		return os;
	}
	std::istream& operator>>(std::istream& is, Streamable& s) {
		return s.read(is);
	}
}