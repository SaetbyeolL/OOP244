//**********************************************************************
//Workshop : #4 (P2)
//File     : CleanerBot.cpp
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 6/13/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include<iomanip>
#include "CleanerBot.h"

using namespace std;

namespace sdds {

	void CleanerBot::resetInfo() {
		m_location = nullptr;
		m_battery = 0;
		m_brush = 0;
		m_active = false;
	}

	CleanerBot::CleanerBot() {
		resetInfo();
	}

	CleanerBot::CleanerBot(const char* location, double battery, int brush, bool active) {
		resetInfo();
		set(location, battery, brush, active);
	}

	CleanerBot::~CleanerBot() {
		delete[] m_location;
	}

	CleanerBot& CleanerBot::set(const char* location, double battery, int brush, bool active) {
		delete[] m_location;
		if (location && location[0] != '\0' && battery > 0 && brush != 0) {
			setLocation(location);
			m_battery = battery;
			m_brush = brush;
			m_active = active;
		}
		else resetInfo();
		return *this;
	}

	void CleanerBot::setLocation(const char* location) {
		if (location && location[0] != '\0') {
			//delete[] m_location;
			m_location = new char[strlen(location) + 1];
			strcpy(m_location, location);
		}
	}

	bool CleanerBot::setActive(bool active) {
		m_active = active;
		return m_active;
	}

	const char* CleanerBot::getLocation() const {
		return m_location;
	}

	double CleanerBot::getBattery() const {
		return m_battery;
	}

	int CleanerBot::getBrush() const {
		return m_brush;
	}

	bool CleanerBot::isActive() const {
		return m_active;
	}

	bool CleanerBot::isValid() const {
		return m_location && m_location[0] != '\0' && m_battery > 0 && m_brush != 0;
	}

	void CleanerBot::display() const {
		cout << setprecision(1) << fixed;
		cout << "| " << setw(10) << left << m_location << " | " << setw(7) << right << m_battery << " | ";
		cout << setw(18) << m_brush << " | " << setw(6) << left << (m_active ? "YES" : "NO") << " |" << endl;
	}

	int report(CleanerBot* bot, short num_bots) {
		short noOfLowBattery = 0;

		cout << "         ------ Cleaner Bots Report -----" << endl;
		cout << "     ---------------------------------------" << endl;
		cout << "| Location   | Battery |  Number of Brushes | Active |" << endl;
		cout << "|------------+---------+--------------------+--------|" << endl;

		for (short i = 0; i < num_bots; i++) {
			if (bot[i].isValid()) {
				bot[i].display();
				if (bot[i].getBattery() < 30) {
					noOfLowBattery++;
				}
			}				
		}
		cout << endl;
		if (noOfLowBattery > 0) {
			cout << "|====================================================|" << endl;
			cout << "| LOW BATTERY WARNING:                               |" << endl;
			cout << "|====================================================|" << endl;
			cout << "| Number of robots to be charged: " << noOfLowBattery << "                  |" << endl;
			cout << "| Sorting robots based on their available power:     |" << endl;
			sort(bot, num_bots);
			cout << "| Location   | Battery |  Number of Brushes | Active |" << endl;
			cout << "|------------+---------+--------------------+--------|" << endl;

			for (short i = 0; i < num_bots; i++) {
				if (bot[i].isValid()) bot[i].display();
			}
		}
		cout << "|====================================================|" << endl;

		return 0;
	}

	void sort(CleanerBot* bot, short num_bots)
	{
		short i, j;
		CleanerBot temp;
		for (i = num_bots - 1; i > 0; i--) {
			for (j = 0; j < i; j++) {
				if (bot[j].getBattery() < bot[j + 1].getBattery()) {
					temp.set(bot[j].getLocation(), bot[j].getBattery(), bot[j].getBrush(), bot[j].isActive());
					bot[j].set(bot[j + 1].getLocation(), bot[j + 1].getBattery(), bot[j + 1].getBrush(), bot[j + 1].isActive());
					bot[j + 1].set(temp.getLocation(), temp.getBattery(), temp.getBrush(), temp.isActive());
				}
			}
		}
	}

}