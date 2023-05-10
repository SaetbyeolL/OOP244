/*************************************************************
 Final Project Milestone 5
 Module: Utils
 File:  utils.cpp
 Version: 1.0
 Date: 2022/8/7
 Author: Saetbyeol Lim
 Revision History
 -------------------------------------------------------------
 Name            Date            Reason
 -------------------------------------------------------------
 -------------------------------------------------------------
 I have done all the coding by myself and only copied the code
 that my professor provided to complete my project milestones.
**************************************************************/

#include <iostream>
#include "Utils.h"
using namespace std;

namespace sdds {

	int getInt(int min, int max) {
		int val;
		int flag = 0;
		do {
			cin >> val;
			if (cin.fail()) {
				cout << "Invalid Selection, try again: ";
				cin.clear();
				//cin.ignore(1000, '\n');
				while (cin.get() != '\n');
			}
			else if (cin.get() != '\n') {
				cout << "Invalid Selection, try again: ";
				while (cin.get() != '\n');
			}
			else if (val<min || val>max) {
				cout << "Invalid Selection, try again: ";
			}
			else {
				flag = 1;
			}

		} while (flag == 0);
		return val;
	}

	int getIntForMemberShip(int min, int max)
	{
		int val;
		int flag = 0;
		do {
			cin >> val;
			if (cin.fail())
			{
				cout << "Invalid membership number, try again: ";
				cin.clear();
				while (cin.get() != '\n');
			}
			else if (cin.get() != '\n')
			{
				cout << "Invalid membership number, try again: ";
				while (cin.get() != '\n');
			}
			else if (val<min || val>max) {
				cout << "Invalid membership number, try again: ";
			}
			else flag = 1;

		} while (flag == 0);
		return val;
	}


}