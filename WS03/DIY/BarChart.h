//**********************************************************************
//Workshop : #3 (P2)
//File     : BarChar.h
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 6/6/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************

#ifndef _SDDS_BARCHART_H
#define _SDDS_BARCHART_H
#include "Bar.h"

namespace sdds {

	class BarChart {
		char* m_titleOfChart;
		Bar* m_Bar;
		char m_fillChar;
		int m_sizeOfBar;
		int m_numOfAddedSample;

	public:
		bool isValid() const;
		void init(const char* title, int noOfSampels, char fill);
		void add(const char* bar_title, int value);
		void draw()const;
		void deallocate();

	};
}

#endif // !SDDS_BARCHART_H





