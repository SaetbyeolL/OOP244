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
      double* m_numbers;// holds the address of the dynamic array of doubles holding the number collection
      char* m_filename;// holds the name of the file associated with the class (if it is the original object and not a copy)
      bool m_isOriginal;// flags if this object is the original (and not a copy)
      int m_numCount;// holds the number of values in the m_number dynamic array
      bool isEmpty()const;
      void setEmpty();
      void setFilename(const char* filename);
      void sort();
   public:
      Numbers();
      Numbers(const char* filename);
      Numbers(const Numbers& I); // addition
      Numbers& operator=(const Numbers& other); //addition
      int numberCount() const; // addition
      bool load(); // addition
      void save() const; // addition
      Numbers& operator+=(double val); // addition
      std::ostream& display(std::ostream& ostr) const; // addition
      double average()const;
      double max()const;
      double min()const;
      
      ~Numbers();
   };
   std::ostream& operator<<(std::ostream& os, const Numbers& N); //addition
   std::istream& operator>>(std::istream& istr, Numbers& N); //addition
}
#endif // !SDDS_NUMBERS_H_

