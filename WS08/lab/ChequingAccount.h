#ifndef SDDS_CHEQUINGACCOUNT_H
#define SDDS_CHEQUINGACCOUNT_H
#include "Account.h"

namespace sdds {
	class ChequingAccount : public Account {
	private: 
		double m_transactionFee;
		double m_monthlyFee;

	public:
		ChequingAccount(double initAccBalance, double transactionFee, double monthlyEndFee);
		bool credit(double credit);
		bool debit(double debit);
		void monthEnd();
		void display(std::ostream&) const;
	};
}

#endif // !SDDS_CHEQUINGACCOUNT_H