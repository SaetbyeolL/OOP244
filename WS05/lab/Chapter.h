//**********************************************************************
//Workshop : #workshop5 (P1)
//File     : Chapter.h
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 6/17/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************

#ifndef SDDS_CHAPTER_H_
#define SDDS_CHAPTER_H_
#include <iostream>
#include <cstring>

namespace sdds {

   const int MAX_CHAPTER_TITLE = 20;

    class Chapter
    {
        int m_num_pages;
        char m_title[MAX_CHAPTER_TITLE+1];
        int m_num_words;
        unsigned int m_chapter_number;
        void init_chapter();

    public:
        Chapter();
        Chapter(const char* title_);
        Chapter(const char* title_, int chapter_num, int n_pages, int n_words);
        std::ostream& display(std::ostream&)const;
        operator int() const;
        operator double() const;
        operator const char* () const;        
        Chapter& operator=(const Chapter& object);        
        Chapter& operator++();
        Chapter& operator--();
    };

    std::ostream& operator<<(std::ostream& os, const Chapter& chapter); //helper function, left shift operator

}
#endif


