/*************************************************************
 Final Project Milestone 3
 Module: Publication
 File:  Publication.h
 Version: 1.0
 Date: 2022/7/29
 Author: Saetbyeol Lim
 Revision History
 -------------------------------------------------------------
 Name            Date            Reason
 -------------------------------------------------------------
 -------------------------------------------------------------
 I have done all the coding by myself and only copied the code
 that my professor provided to complete my project milestones.
**************************************************************/
#ifndef SDDS_PUBLICATION_H
#define SDDS_PUBLICATION_H
#include "Streamable.h"
#include "Date.h"

namespace sdds {

	class Publication : public Streamable {
		char* m_title;
		char m_shelfId[5];
		int m_membership;
		int m_libRef = -1;
		Date m_date;

	public: 
		Publication();
		Publication(const Publication& I);
		~Publication();
		Publication& operator=(const Publication& other);
		virtual void set(int member_id);
		// Sets the membership attribute to either zero or a five-digit integer.
		void setRef(int value);
		// Sets the **libRef** attribute value
		void resetDate();
		// Sets the date to the current date of the system.
		virtual char type()const;
		//Returns the character 'P' to identify this object as a "Publication object"
		bool onLoan()const;
		//Returns true is the publication is checkout (membership is non-zero)
		Date checkoutDate()const;
		//Returns the date attribute
		bool operator==(const char* title)const;
		//Returns true if the argument title appears anywhere in the title of the 
		//publication. Otherwise, it returns false; (use strstr() function in <cstring>)
		operator const char* ()const;
		//Returns the title attribute
		int getRef()const;
		//Returns the libRef attirbute. 

		bool conIO(std::ios& io) const;
	    //Returns true if the address of the io object is the same as the address of either the cin object or the cout object.
		std::ostream& write(std::ostream& os)const;
		std::istream& read(std::istream& is);
		operator bool() const;

	};
}
#endif