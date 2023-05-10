/*************************************************************
 Final Project Milestone 2
 Module: LibApp
 File:  LibApp.h
 Version: 1.0
 Date: 2022/7/22
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
#include "Menu.h"

namespace sdds {

	class LibApp {
	private: 
		bool m_changed;
		Menu m_mainMenu;
		Menu m_exitMenu;

		bool confirm(const char* message);
		void load();
		void save();
		void search();
		void returnPub();
		void newPublication();
		void removePublication();
		void checkOutPub();

	public:
		LibApp();
		void run();
	};
}
#endif // !SDDS_LIBAPP_H
