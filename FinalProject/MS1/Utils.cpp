/*************************************************************
 Final Project Milestone 1
 Module: Utils
 File:  utils.cpp
 Version: 1.0
 Date: 2022/7/15
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
using namespace std;
#include "Utils.h"


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
}