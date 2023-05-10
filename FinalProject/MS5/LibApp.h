/*************************************************************
 Final Project Milestone 5
 Module: LibApp
 File:  LibApp.h
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
#ifndef SDDS_LIBAPP_H
#define SDDS_LIBAPP_H
#include "PublicationSelector.h"
#include "Book.h"
#include "Lib.h"
#include "Menu.h"

namespace sdds {

	class LibApp {
		char m_fileName[256];
		Publication* m_ppa[SDDS_LIBRARY_CAPACITY];
		int m_nolp;
		int m_llrn;
		Menu m_pubType;
		bool m_changed;
		Menu m_mainMenu;
		Menu m_exitMenu;
		bool confirm(const char* message);
		void load();
		void save();
		int search(int mode);
		void returnPub();
		void newPublication();
		void removePublication();
		void checkOutPub();

	public:
		LibApp(const char* filename);
		~LibApp();
		void run();
		Publication* getPub(int libRef)const;
	};
}
#endif // !SDDS_LIBAPP_H

