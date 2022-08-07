//**********************************************************************
//Workshop : #9 (P1)
//File     : FullName.cpp
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
#include <fstream>
#include "FullName.h"
using namespace std;

namespace sdds {

	FullName::FullName(): m_value { nullptr } {
	}

	FullName::FullName(const char* name, const char* lastName): Name(name) , m_value{ nullptr } {

		if (lastName && lastName[0] != '\0') {
			m_value = new char[strlen(lastName) + 1];
			strcpy(m_value, lastName);
		}
	}

	FullName::FullName(const FullName& I) : m_value{ nullptr } {
		*this = I;
	}

	FullName& FullName::operator=(const FullName& other) {
		if (this != &other) {
			Name::operator=(other);
			delete[] m_value;
			m_value = new char[strlen(other.m_value) + 1];
			strcpy(m_value, other.m_value);
		}
		return *this;
	}

	FullName::~FullName() {
		delete[] m_value;
	}

	FullName::operator const char* () const {
		return m_value;
	}

	FullName::operator bool() const {
		return m_value && m_value[0] != '\0';
	}

	std::ostream& FullName::display(std::ostream& ostr) const {
		if (*this) {
			Name::display(ostr);
			ostr << ' ' << m_value;
		}
		return ostr;
	}

	std::istream& FullName::read(std::istream& istr) {
		Name::read(istr);
		char temp[256];
		istr.getline(temp, 255);
		if (istr) {
			delete[] m_value;
			m_value = new char[strlen(temp) + 1];
			strcpy(m_value, temp);
		}
		return istr;
	}
}