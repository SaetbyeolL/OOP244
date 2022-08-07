//**********************************************************************
//Workshop : #9 (P1)
//File     : Name.cpp
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 7/29/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************

#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "Name.h"
using namespace std;

namespace sdds {

	Name::Name() : m_value{ nullptr } {
	}

	Name::Name(const char* name) : m_value{ nullptr } {

		if (name && name[0] != '\0') {
			m_value = new char[strlen(name) + 1];
			strcpy(m_value, name);
		}
	}

	Name::Name(const Name& I) : m_value{ nullptr }
	{
		*this = I;
	}

	Name& Name::operator=(const Name& other) {

		if (this != &other) {
			if (other.m_value) {
				delete[] m_value;
				m_value = new char[strlen(other.m_value) + 1];
				strcpy(m_value, other.m_value);
			}
		}
		return *this;
	}

	Name::~Name() {
		delete[] m_value;
	}

	Name::operator const char* () const {
		return m_value;
	}//Returns the address of the dynamic Cstring.

	Name::operator bool() const {

		return m_value && m_value[0] != '\0';
	}

	std::ostream& Name::display(std::ostream& ostr) const
	{
		if (*this) {
			ostr << m_value;
		}
		return ostr;
	}

	std::istream& Name::read(std::istream& istr) {
		char temp[256];
		istr >> temp;
		if (istr) {
			delete[] m_value;
			m_value = new char[strlen(temp) + 1];
			strcpy(m_value, temp);
			istr.ignore();
		}
		return istr;
	}

	ostream& operator<<(ostream& ostr, const Name& N)  {
		return N.display(ostr);
	}

	istream& operator>>(istream& istr, Name& N) {
		return N.read(istr);
	}

}