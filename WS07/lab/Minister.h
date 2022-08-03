//**********************************************************************
//Workshop : #WORKSHOP7 (P1)
//File     : Minister.h
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 7/15/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************

#ifndef SDDS_MINISTER_H
#define SDDS_MINISTER_H

#include <iostream>
#include "MemberParliament.h"

namespace sdds {

	class Minister : public MemberParliament {
		char m_pm[50]; //reports to
		int m_year;

	public:
		Minister(const char* id, int age, int year, const char* name, const char* district);
		void changePM(const char* pm);
		void assumeOffice(double year);
		std::ostream& write(std::ostream& os) const;
		std::istream& read(std::istream& in);
	};

	std::ostream& operator<<(std::ostream& os, const Minister& minister);
	std::istream& operator>>(std::istream& is, Minister& minister);
}

#endif // !SDDS_MINISTER_H


