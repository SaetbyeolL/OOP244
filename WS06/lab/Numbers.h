//**********************************************************************
//Workshop : #WORKSHOP6 (P1)
//File     : Numbers.h
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 7/7/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************

#ifndef SDDS_NUMBERS_H_
#define SDDS_NUMBERS_H_

#include <iostream>

namespace sdds {

   class Numbers {
      double* m_numbers;
      char* m_filename;
      bool m_isOriginal;
      int m_numCount;
      bool isEmpty()const;
      void setEmpty();
      void setFilename(const char* filename);
      void sort();

   public:
      Numbers();
      Numbers(const char* filename);
      Numbers(const Numbers& I);
      int numberCount() const;
      bool load();
      void save() const;
      Numbers& operator+=(double val);
      std::ostream& display(std::ostream& ostr) const;
      double average()const;
      double max()const;
      double min()const;
      Numbers& operator=(const Numbers& other);
      ~Numbers();
   };
   std::ostream& operator<<(std::ostream& os, const Numbers& N);
   std::istream& operator>>(std::istream& istr, Numbers& N);
}

#endif // !SDDS_NUMBERS_H_

