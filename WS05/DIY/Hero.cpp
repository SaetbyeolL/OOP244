//**********************************************************************
//Workshop : #workshop5 (P2)
//File     : Hero.cpp
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 6/19/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include"Hero.h"

using namespace std;

namespace sdds {
	void Hero::setEmpty()
	{
		m_nameOfHero[0] = '\0';
		m_setOfPower = nullptr;
		m_numOfPower = 0;
		m_powerLevel = 0;
	}
	void Hero::updatePowLev()
	{
		int total = 0;
		for (int i = 0; i < m_numOfPower; i++)
		{
			total += m_setOfPower[i].checkRarity();
		}
		m_powerLevel = total * m_numOfPower;
	}
	int Hero::getPowLevel() const
	{
		return m_powerLevel;
	}
	Hero::Hero() {
		setEmpty();
	}

	Hero::~Hero()
	{
		delete[] m_setOfPower;
	}

	Hero::Hero(const char* name, Power* listOfPower, int countOfPower) {
		if (name && name[0] != '\0' && listOfPower && countOfPower > 0) {
			strcpy(m_nameOfHero, name);
			m_numOfPower = countOfPower;
			//m_setOfPower = listOfPower;
			m_setOfPower = new Power[m_numOfPower];
			for (int i = 0; i < m_numOfPower; i++) {
				m_setOfPower[i] = listOfPower[i];
			}
			updatePowLev();
		}

	}

	Hero& Hero::operator+=(Power& power)
	{
		Power* temp;
		temp = m_setOfPower;
		m_setOfPower = new Power[m_numOfPower + 1];
		for (int i = 0; i < m_numOfPower; i++) {
			m_setOfPower[i] = temp[i];
		}
		m_setOfPower[m_numOfPower] = power;
		delete[] temp;
		m_numOfPower++;
		updatePowLev();
		return *this;
	}

	Hero& Hero::operator-=(int powerLevel)
	{
		m_powerLevel -= powerLevel;
		return *this;
	}

	std::ostream& Hero::display()const {
		cout << "Name: " << m_nameOfHero << endl;
		displayDetails(m_setOfPower, m_numOfPower);
		cout << "Power Level: " << m_powerLevel;
		return cout;
	}

	bool operator<(Hero& h1, Hero& h2)
	{
		return h1.getPowLevel() < h2.getPowLevel();
	}
	bool operator>(Hero& h1, Hero& h2)
	{
		return h1.getPowLevel() > h2.getPowLevel();
	}

	Power& operator>>(Power& power, Hero& hero)
	{
		hero += power;
		return power;
	}

	Hero& operator<<(Hero& hero, Power& power)
	{
		hero += power;
		return hero;
		
	}

}


