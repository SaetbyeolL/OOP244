#ifndef SDDS_SAVINGS_ACCOUNT_H
#define SDDS_SAVINGS_ACCOUNT_H
#include "Account.h"

namespace sdds {
	class SavingsAccount : public Account {
	private: 
		double m_interestRate;

	public:
		SavingsAccount(double initialBalance, double interestRate);
		void monthEnd();
		void display(std::ostream& os) const;
	};

}

#endif // !SDDS_ACCOUNT_H