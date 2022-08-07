#ifndef SDDS_IACCOUNT_H
#define SDDS_IACCOUNT_H
#include <iostream>

namespace sdds {
	class iAccount {

	public:
		virtual bool credit(double) = 0 ;//adds a positive amount to the account balance
		virtual bool debit(double) = 0;//subtracts a positive amount from the account balance
		virtual void monthEnd()= 0;// applies month - end transactions to the account
		virtual void display(std::ostream&) const = 0;// inserts account information into an ostream object
		virtual~iAccount() {};
	};
	iAccount* CreateAccount(const char* str, double balance);
}

#endif // !SDDS_IACCOUNT_H
