#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <iomanip>
#include "SavingsAccount.h"
using namespace std;

namespace sdds {

	SavingsAccount::SavingsAccount(double initialBalance, double interestRate): Account(initialBalance) {
		if (interestRate > 0) {
			m_interestRate = interestRate;
		}
		else {
			m_interestRate = 0.0;
		}
	}

	void SavingsAccount::monthEnd() {

		Account::credit(Account::balance() * m_interestRate);
	}

	void SavingsAccount::display(std::ostream& os) const {

		os << setprecision(2);
		os << fixed;
		os << "Account type: Savings" << endl;
		os << "Balance: $" << Account:: balance() << endl;
		os << "Interest Rate (%): " << m_interestRate*100 << endl;
	}

}