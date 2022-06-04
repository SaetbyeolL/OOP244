//**********************************************************************
//Workshop : #3 (P1)
//File     : Army.cpp
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 6/3/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <cstring>
#include "Army.h"

using namespace std;

namespace sdds {

	void Army::setEmpty() {

		m_nationality[0] = '\0'; // NULL
		m_numberOfUnit = 0;
	}

	void Army::createArmy(const char* country, double pow, int troops) {

		if (country != nullptr && country[0] != '\0' && pow > 0 && troops > 0) {
			strncpy(m_nationality, country, MAX_NAME_LEN);
			m_powerOfArmy = pow;
			m_numberOfUnit = troops;
		}
		else {
			setEmpty();
		}
	}

	void Army::updateUnits(int troops) {

		m_numberOfUnit += troops;
		m_powerOfArmy += troops* 0.25;
	}

	const char* Army::checkNationality() const{

		return m_nationality;
	}

	int Army::checkCapacity() const {

		return m_numberOfUnit;
	}

	double Army::checkPower() const {
		return m_powerOfArmy;
	}

	bool Army::isEmpty() const {

		if (m_nationality[0] == '\0' && m_numberOfUnit == 0) {
			return true;
		}
		else{
			return false;
		}
	}

	bool Army::isStrongerThan(const Army& army)const {

		if (m_powerOfArmy > army.m_powerOfArmy)
		{
			return true;
		}
		else {
			return false;
		}
	}

	void battle(Army& arm1, Army& arm2)
	{
		cout << "In battle of " << arm1.checkNationality() << " and " << arm2.checkNationality() << ", ";

		if (!arm1.isEmpty() && !arm2.isEmpty()) {
			if (arm1.isStrongerThan(arm2)) {
				arm2.updateUnits((int)(arm2.checkCapacity() * -0.5));
				cout << arm1.checkNationality();
			}
			else {
				arm1.updateUnits((int)(arm1.checkCapacity() * -0.5));
				cout << arm2.checkNationality();
			}
			cout << " is victorious!" << endl;
		}
	}

	void displayDetails(const Army* armies, int size)
	{
		cout.setf(ios::fixed);
		cout.precision(1);

		cout << "Armies reporting to battle: " << endl;
		for (int i = 0; i < size; i++) {
			if (!armies[i].isEmpty()) {
				cout << "Nationality: " << armies[i].checkNationality() << ", ";
				cout << "Units Count: " << armies[i].checkCapacity() << ", ";
				cout << "Power left: " << armies[i].checkPower() << endl;
			}

		}
	}
}

















