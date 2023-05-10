/*************************************************************
 Final Project Milestone 5
 Module: Streamable
 File:  Streamable.h
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
#ifndef SDDS_STREAMABLE_H
#define SDDS_STREAMABLE_H
#include <iostream>

namespace sdds {
	class Streamable {
	public:
		//These all method will not implement in Streamable.cpp because it's interface module. 
		virtual std::ostream& write(std::ostream& os) const = 0; //const => reason:this method is not capable of modifying.
		virtual std::istream& read(std::istream& is) = 0;
		virtual bool conIO(std::ios& io) const = 0;
		virtual operator bool() const = 0;
		virtual ~Streamable() {};
	};
	std::ostream& operator<<(std::ostream& os, const Streamable& obj);
	std::istream& operator>>(std::istream& is, Streamable& obj);
}
#endif // !SDDS_STREAMABLE_H
