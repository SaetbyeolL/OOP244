/*************************************************************
 Final Project Milestone 5
 Module: Book
 File:  Book.h
 Version: 1.0
 Date: 2022/8/7
 Author: Saetbyeol Lim
 Revision History
 -------------------------------------------------------------
 Name            Date            Reason
 -------------------------------------------------------------
 -------------------------------------------------------------
 I have done all the coding by myself and only copied the code
 that my professor provided to complete my project milestones.
**************************************************************/

#ifndef SDDS_BOOK_H
#define SDDS_BOOK_H
#include <iostream>
#include "Publication.h"
#include "Lib.h"

namespace sdds {

	class Book: public Publication {
		char* m_authorName;

	public:
		Book();
		// Rule of three goes here:
		Book(const Book& I);
		~Book();
		Book& operator=(const Book& other);
		//The book class overrides the following virtual methods and type conversion operator.
		virtual char type()const;
		std::ostream& write(std::ostream& os)const;
		std::istream& read(std::istream& is);
		virtual void set(int member_id);
		operator bool() const;

	};

}
#endif