//**********************************************************************
//Workshop : #3 (P2)
//File     : Bar.cpp
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 6/6/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************
#define _CRT_SECURE_NO_WARNINGS

#include<cstring>
#include<iostream>
#include "Bar.h"
using namespace std;

namespace sdds {

	void Bar::setEmpty() {

		m_title[0] = '\0';
		m_fillChar = '\0';
		m_sampleValue = -1; 
	}

	void Bar::set(const char* title, char fillchar, int sampleValue) {
		if (title && title[0] != '\0' && fillchar && sampleValue >= 0 && sampleValue <= 100) {
			strncpy(m_title, title, 20);
			m_fillChar = fillchar;
			m_sampleValue = sampleValue;
		}
		else {
			setEmpty();
		}
	}

	bool Bar::isValid() const {
		return m_title && m_title[0] != '\0' && m_sampleValue >= 0 && m_sampleValue <= 100;
	}

	void Bar::draw()const {

		if (m_sampleValue >= 0 && m_sampleValue <= 100) {
			cout.setf(ios::left);
			cout.width(20);
			cout.fill('.');
			cout << m_title;
			cout << '|';

			for (int i = 0; i < m_sampleValue / 2; i++) {
				cout << m_fillChar;
			}
			cout << endl;
		}
	}
}

















































































