//**********************************************************************
//Workshop : #3 (P2)
//File     : BarChart.cpp
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
#include "BarChart.h"

using namespace std;
namespace sdds {

	bool BarChart::isValid() const {

		bool isSomeOneInvalid = false;
		if (m_Bar) {
			for (int i = 0; i < m_numOfAddedSample; i++) {
				if (!m_Bar[i].isValid()) {
					isSomeOneInvalid = true;
				}
			}
		}
		else {
			isSomeOneInvalid = true;
		}
		return !isSomeOneInvalid && m_titleOfChart && m_numOfAddedSample == m_sizeOfBar;
	}

	void BarChart::init(const char* title, int noOfSamples, char fill) {
		m_titleOfChart = new char[strlen(title) + 1];
		strcpy(m_titleOfChart, title);
		m_sizeOfBar = noOfSamples;
		m_Bar = new Bar[m_sizeOfBar];
		m_fillChar = fill;
		m_numOfAddedSample = 0;
	}

	void BarChart::add(const char* bar_title, int value) {
		m_Bar[m_numOfAddedSample].set(bar_title, m_fillChar, value);
		m_numOfAddedSample++;
	}

	void BarChart::draw()const {
		if (isValid()) {
			cout << m_titleOfChart << endl;
			cout << "-----------------------------------------------------------------------" << endl;
			for (int i = 0; i < m_sizeOfBar; i++) {
				m_Bar[i].draw();
			}
			cout << "-----------------------------------------------------------------------" << endl;
		}
		else {
			cout << "Invalid Chart!" << endl;
		}
	}

	void BarChart::deallocate() {
		delete[] m_titleOfChart;
		delete[] m_Bar;
	}

}




























