//**********************************************************************
//Workshop : #WORKSHOP7 (P1)
//File     : Minister.cpp
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 7/15/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************

#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "Minister.h"
using namespace std;

namespace sdds {

	Minister::Minister(const char* id, int age, int year, const char* name, const char* district) : MemberParliament(id, age) { 
		MemberParliament::NewDistrict(district);
		strcpy(m_pm, name);
		m_year = year;
	}

	void Minister::changePM(const char* pm) {
		strcpy(m_pm, pm);
	}

	void Minister::assumeOffice(double year) {
		m_year = year;
	}

	std::ostream& Minister::write(std::ostream& os) const {
		MemberParliament::write(os); 
		os << " | " << m_pm << '/' << m_year;
		return os;
	}

	std::istream& Minister::read(std::istream& in) {
		MemberParliament::read(in);
		cout << "Reports TO: ";
		in >> m_pm;
		cout << "Year Assumed Office: ";
		in >> m_year;
		return in;
	}

	std::ostream& operator<<(std::ostream& os, const Minister& minister) {
		return minister.write(os);
	}

	std::istream& operator>>(std::istream& is, Minister& minister) {
		return minister.read(is);
	}
}