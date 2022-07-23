//**********************************************************************
//Workshop : #WORKSHOP6 (P2)
//File     : Basket.h
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 7/8/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************

#ifndef SDDS_BASKET_H
#define SDDS_BASKET_H
#include <iostream>

namespace sdds {

	struct Fruit {
		char m_name[30 + 1]; // the name of the fruit
		double m_qty;        // quantity in kilograms
	};

	class Basket {

		Fruit* m_fruits;
		int m_cnt;
		double m_price;

	public:
		Basket();
		Basket(Fruit* fruits, int size, double price);
		Basket(const Basket& I);
		~Basket();
		Basket& operator=(const Basket& other);
		void setPrice(double price);
		operator bool()const;
		Basket& operator+=(Fruit fruit);
		friend std::ostream& operator<<(std::ostream& os, const Basket& basket);
	};
	
}
#endif // !SDDS_BASKET_H


