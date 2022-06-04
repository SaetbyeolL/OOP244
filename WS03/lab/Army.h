//**********************************************************************
//Workshop : #3 (P1)
//File     : Army.h
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 6/3/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************

#ifndef SDDS_ARMY_H
#define SDDS_ARMY_H
#define MAX_NAME_LEN 50

namespace sdds {

	class Army{
		     
		char m_nationality[MAX_NAME_LEN+1]; 
		int m_numberOfUnit;
		double m_powerOfArmy;

	public:
		void setEmpty();
		void createArmy(const char* country, double pow, int troops);
		void updateUnits(int troops);
		const char* checkNationality() const;
		int checkCapacity() const;
		double checkPower() const;
		bool isEmpty() const;
		bool isStrongerThan(const Army& army)const;
	};
	void battle(Army& arm1, Army& arm2);
	void displayDetails(const Army* armies, int size);
}

#endif // !SDDS_ARMY_H