/*************************************************************
 Final Project Milestone 4
 Module: Publication
 File:  Publication.h
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
#include <cstring>
#include <iomanip>
#include "Publication.h"
#include "Lib.h"
#include "Date.h"

using namespace std;

namespace sdds {

	Publication::Publication() : m_title{ nullptr }, m_shelfId{ "" }, m_membership{ 0 }, m_libRef{ -1 }, m_date{}{
		//m_date{} call Date constructor
	}
	Publication::Publication(const Publication& I) : m_title{ nullptr }, m_shelfId{ "" }, m_membership{ 0 }, m_libRef{ -1 }, m_date{} {
		*this = I;
	}
	Publication::~Publication() {
		delete[] m_title;
	}
	Publication& Publication::operator=(const Publication& other)
	{
		if (this != &other) {
			if (other.m_title) {
				delete[] m_title;
				m_title = new char[strlen(other.m_title) + 1];
				strcpy(m_title, other.m_title);
			}
			strcpy(m_shelfId, other.m_shelfId);
			m_membership = other.m_membership;
			m_libRef = other.m_libRef;
			m_date = other.m_date;
		}
		return *this;
	}
	void Publication::set(int member_id) {// Sets the membership attribute to either zero or a five-digit integer.
		if (member_id < 100000 && member_id >= 0) {
			m_membership = member_id;
		}
	}
	void Publication::setRef(int value) {
		m_libRef = value;
	}
	void Publication::resetDate() {
		m_date = Date();
	}
	char Publication::type() const {
		return 'P';
	}
	bool Publication::onLoan() const {
		bool result = false;
		if (m_membership != 0) {
			result = true;
		}
		return result;
	}
	Date Publication::checkoutDate() const {
		return m_date;
	}
	bool Publication::operator==(const char* title) const {
		bool result = false;
		if (strstr(m_title, title)) {
			result = true;
		}
		return result;
	}
	Publication::operator const char* () const {
		return m_title;
	}
	int Publication::getRef() const {
		return m_libRef;
	}
	bool Publication::conIO(std::ios& io) const {
		return &io == &cin || &io == &cout;
	}

	std::ostream& Publication::write(std::ostream& os) const {
		if (conIO(os)) {
			os << "| " << m_shelfId << " | ";
			if (strlen(m_title) > SDDS_TITLE_WIDTH) {
				for (int i = 0; i < SDDS_TITLE_WIDTH; i++) {
					os << m_title[i];
				}
			}
			else {
				os << setw(30) << left << setfill('.') << m_title;
			}
			os << " | ";
			if (m_membership > 0) {
				os << m_membership;
			}
			else {
				os << " N/A ";
			}
			os << " | " << m_date << " |";
		}
		else {
			os << type() << '\t' << m_libRef << '\t' << m_shelfId << '\t' << m_title << '\t' << m_membership << '\t' << m_date;
		}
		return os;
	}
	std::istream& Publication::read(std::istream& is)
	{
		delete[] m_title;
		m_title = nullptr;
		m_shelfId[0] = '\0';
		m_membership = 0;
		m_libRef = -1;
		m_date = Date();
		char tempTitle[256];
		char tempShelf[256];

		if (conIO(is)) {
			cout << "Shelf No: ";
			is >> tempShelf;
			if (strlen(tempShelf) != SDDS_SHELF_ID_LEN) {
				is.setstate(std::ios::failbit);
			}
			else {
				strcpy(m_shelfId, tempShelf);
			}
			is.ignore(1000, '\n');
			cout << "Title: ";
			is.getline(tempTitle, 255);
			cout << "Date: ";
			is >> m_date;
			if (!m_date) {
				is.setstate(std::ios::failbit);
			}

		}
		else {
			is >> m_libRef;
			is.ignore();
			is >> m_shelfId;
			is.ignore();
			is.getline(tempTitle, 255, '\t');
			//is.ignore();
			is >> m_membership;
			is.ignore();
			is >> m_date;
			if (!m_date) {
				is.setstate(std::ios::failbit);
			}
		}
		if (is) {
			m_title = new char[strlen(tempTitle) + 1];
			strcpy(m_title, tempTitle);
		}
		return is;
	}
	Publication::operator bool() const {
		return m_title && m_title[0] != '\0' && m_shelfId[0] != '\0';
	}

}