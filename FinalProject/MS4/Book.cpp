/*************************************************************
 Final Project Milestone 4
 Module: Book
 File:  Book.cpp
 Version: 1.0
 Date: 2022/8/5
 Author: Saetbyeol Lim
 Revision History
 -------------------------------------------------------------
 Name            Date            Reason
 -------------------------------------------------------------
 -------------------------------------------------------------
 I have done all the coding by myself and only copied the code
 that my professor provided to complete my project milestones.
**************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <iomanip>
#include<cstring>
#include <iostream>
#include "Book.h"
using namespace std;

namespace sdds {

    Book::Book() :m_authorName{nullptr} {
    }

    Book::Book(const Book& I) :m_authorName{ nullptr } {
        *this = I;
    }

    Book::~Book() {
        delete[] m_authorName;
    }

    Book& Book::operator=(const Book& other) {
        if (this != &other) {
            Publication::operator=(other);
            if (other.m_authorName) {
                delete[] m_authorName;
                m_authorName = new char[strlen(other.m_authorName) + 1];
                strcpy(m_authorName, other.m_authorName);
            }
        }
        return *this;
    }

    char Book::type() const {
        return 'B';
    }

    std::ostream& Book::write(std::ostream& os) const {
        char temp[SDDS_AUTHOR_WIDTH + 1] = {};
        strncpy(temp, m_authorName, SDDS_AUTHOR_WIDTH);
        Publication::write(os);
        if (conIO(os)) {
            os << ' ';
            if (strlen(m_authorName) > SDDS_AUTHOR_WIDTH) {
                os << setw(SDDS_AUTHOR_WIDTH);
                os << temp;
            }
            else {
                os << setw(SDDS_AUTHOR_WIDTH);
                os << m_authorName;
            }
            os << " |";
        }
        else {
            os << '\t' << m_authorName;
        }
        return os;
    }

    std::istream& Book::read(std::istream& is) {
        char temp[256];
        Publication::read(is);
        delete[] m_authorName;
        if (conIO(is)) {
            is.ignore();
            cout << "Author: ";
            is.get(temp, 255);
        }
        else {
            is.ignore();
            is.get(temp, 255);
        }
        if (is) {
            m_authorName = new char[strlen(temp) + 1];
            strcpy(m_authorName, temp);
        }
        return is;
    }

    void Book::set(int member_id) {
        Publication::set(member_id);
        Publication::resetDate();
    }

    Book::operator bool() const {
        bool result = false;
        if (m_authorName && m_authorName[0] != '\0') {
            result = true;
        }
        return Publication::operator bool()&& result;
    }
}