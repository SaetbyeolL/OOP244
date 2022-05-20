//**********************************************************************
//Workshop : #1 (P1)
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 5/20/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************


#ifndef _244_SHOPPING_LIST_H 
#define _244_SHOPPING_LIST_H

namespace ws01 {

	const int MAX_NO_OF_RECS = 15;


	bool loadList();
	void displayList();
	void removeBoughtItems();
	void removeItem(int index);
	bool saveList();
	void clearList();
	void toggleBought();
	void addItemToList();
	void removeItemfromList();
	bool listIsEmpty();

}

#endif







