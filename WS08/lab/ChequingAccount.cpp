#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <iomanip>
#include "ChequingAccount.h"
using namespace std;

namespace sdds {

	ChequingAccount::ChequingAccount(double initAccBalance, double transactionFee, double monthlyEndFee): Account(initAccBalance) {
		// Parent constructor should be called first.  
		if (transactionFee > 0) {
			m_transactionFee = transactionFee;
		}
		else {
			m_transactionFee = 0.0;
		}

		if (monthlyEndFee > 0) {
			m_monthlyFee = monthlyEndFee;
		}
		else {
			m_monthlyFee = 0.0;
		}
	}

	bool ChequingAccount::credit(double amount) {// newly credited amount
		bool result = false;

		if (Account::credit(amount)) {// To access balance, we call Parent class.

			result = Account::debit(m_transactionFee);
		}
		return result;
	}

	bool ChequingAccount::debit(double amount) {
		bool result = false;

		if (Account::debit(amount)) {

			result = Account::debit(m_transactionFee);
		}
		return result;
	}

	void ChequingAccount::monthEnd() {

		Account::debit(m_monthlyFee);
	}


	void ChequingAccount::display(std::ostream& os) const {

		os << setprecision(2);
		os << fixed;
		os << "Account type: Chequing" << endl;
		os << "Balance: $" << Account::balance() << endl;
		os << "Per Transaction Fee: " << m_transactionFee << endl;
		os << "Monthly Fee: " << m_monthlyFee << endl;

	}


}