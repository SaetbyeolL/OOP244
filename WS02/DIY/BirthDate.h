//**********************************************************************
//Workshop : #2 (P2)
//File     : BirthDate.h
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 5/30/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************

#ifndef SDDS_BIRTHDATE_H
#define SDDS_BIRTHDATE_H

namespace sdds {

	struct Employee {
		char* m_name;
		int m_dateOfBirth;
		int m_monthOfBirth;
		int m_yearOfBirth;
	};

	bool beginSearch(const char* filename);
	bool readBirthDate(int month);
	void sort();
	void displayBirthdays();
	void deallocate();
	void endSearch();
}

#endif














