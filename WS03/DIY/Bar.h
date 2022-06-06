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

namespace sdds {

	class Bar {
		char m_title[21];
		char m_fillChar;
		int m_sampleValue;

	public:
		void setEmpty();
		void set(const char* title, char fillchar, int sampleValue);
		bool isValid() const;
		void draw()const;
	};

}
#endif // !SDDS_BAR_H