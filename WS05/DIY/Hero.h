//**********************************************************************
//Workshop : #workshop5 (P2)
//File     : Hero.h
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 6/20/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************

#ifndef SDDS_HERO_H
#define SDDS_HERO_H
#include<iostream>
#include "Power.h"

namespace sdds {

	class Hero {

		char m_nameOfHero[MAX_NAME_LENGTH + 1];
		Power* m_setOfPower; 
		int m_numOfPower;
		int m_powerLevel;
		void setEmpty();
		void updatePowLev();

	public:
		Hero();
		~Hero();
		int getPowLevel() const;
		Hero(const char* name, Power* listOfPower, int countOfPower);
		std::ostream& display()const;
		Hero& operator+=(Power& power);
		Hero& operator-=(int powerLevel);

	};
	bool operator<(Hero& h1, Hero& h2);
	bool operator>(Hero& h1, Hero& h2);
	Power& operator>>(Power& power, Hero& hero);
	Hero& operator<<(Hero& hero, Power& power);

}
#endif

























