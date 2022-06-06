//**********************************************************************
//Workshop : #3 (P2)
//File     : Bar.h
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 6/6/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************
#ifndef _SDDS_BAR_H
#define _SDDS_BAR_H
#define MAX_CHARACTER 20

namespace sdds {

	class Bar {
		char m_title[MAX_CHARACTER + 1];
		char m_fillChar;
		int m_sampleValue;

	public:
		void setEmpty();
		void set(const char* title, char fillchar, int sampleVal);
		bool isValid();
		void draw()const;//BarChart¿¡µµ draw
	};

}
#endif