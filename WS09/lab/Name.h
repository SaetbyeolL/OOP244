//**********************************************************************
//Workshop : #9 (P1)
//File     : Name.h
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 7/29/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************

#ifndef SDDS_NAME_H
#define SDDS_NAME_H
#include <iostream>

namespace sdds {

	class Name {
        char* m_value;//�����Ҵ�� ���
    public:
        Name();
        Name(const char* name);
        // Rule of three goes here:// shallow copy�����ؼ� deep copy�� ���ֱ����ؼ�
        Name(const Name& I);
        Name& operator=(const Name& other);
        virtual ~Name();

        operator const char* ()const;
        virtual operator bool()const; 
        virtual std::ostream& display(std::ostream& ostr = std::cout)const;
        virtual std::istream& read(std::istream& istr = std::cin);
	};
    std::ostream& operator<<(std::ostream& os, const Name& name);
    std::istream& operator>>(std::istream& is, Name& name);
}
#endif // SDDS_FULLNAME_H
