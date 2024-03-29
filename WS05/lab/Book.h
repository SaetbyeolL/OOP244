//**********************************************************************
//Workshop : #workshop5 (P1)
//File     : Book.h
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 6/17/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************

#ifndef SDDS_BOOK_H_
#define SDDS_BOOK_H_
#include <iostream>
#include <cstring>
#include "Chapter.h"

namespace sdds {

   const int MAX_NUM_CHAPTERS = 10;
   const int MAX_BOOK_TITEL = 40;
   const int MAX_AUTHOR_NAME = 20;

    class Book
    {
        char m_title[MAX_BOOK_TITEL+1];
        char m_author[MAX_AUTHOR_NAME+1];
        int m_num_chapters;
        int m_num_pages;
        double m_price;
        Chapter m_chapters[MAX_NUM_CHAPTERS];

        void init_book();
        int add_chapter(Chapter* addChapter);

    public:
        Book();
        Book(const char* title_);
        Book(const char* title_, const char* author_, double price_);
        void summary(); // Print a book summary
        Book operator ++(int);
        std::ostream& display(std::ostream& os)const;
        operator int() const;
        operator bool() const;
        operator double() const;
        operator const char* () const;
        Book& operator+=(Chapter& chapter);
        Book& operator-=(double bookDiscount);
    };

    std::ostream& operator<<(std::ostream& os, const Book& book);
  
}
#endif
