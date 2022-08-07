#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Account.h"
using namespace std;

namespace sdds {

	Account::Account(double initialBalance) {
		if (initialBalance < 0) {
			m_currentBalance= 0.0;
		}
		else {
			m_currentBalance = initialBalance;
		}
	}

	bool Account::credit(double creditedAmount) {
		bool result = false;

		if (creditedAmount > 0) {
			m_currentBalance += creditedAmount;
			result = true;
		}
		//else {
		//	result = false;
		//}

		return result;
	}

	bool Account::debit(double debitedAmount) {
		bool result = false;

		if (debitedAmount > 0) {
			m_currentBalance -= debitedAmount;
			result = true;
		}
		//else {
		//	result = false;
		//}
		return result;
	}

	double Account::balance() const {
		return m_currentBalance;
	}

}
