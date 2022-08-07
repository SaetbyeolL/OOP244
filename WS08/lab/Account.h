#ifndef SDDS_ACCOUNT_H
#define SDDS_ACCOUNT_H
#include "iAccount.h"

namespace sdds {
	class Account : public iAccount {
	private: 
		double m_currentBalance;

	public:
		Account(double initialBalance);
		bool credit(double creditedAmount);
		bool debit(double debitedAmount);
	
	protected: 
		double balance() const;//returns the current balance of the account.
	};
}

#endif // !SDDS_ACCOUNT_H