//**********************************************************************
//Workshop : #4 (P2)
//File     : CleanerBot.h
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 6/13/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************

#ifndef SDDS_CLEANERBOT_H
#define SDDS_CLEANERBOT_H

namespace sdds {
	class CleanerBot {
		char* m_location;
		double m_battery;
		int m_brush;
		bool m_active;
		void resetInfo();

	public: 
		CleanerBot();
		CleanerBot(const char* location, double battery, int brush, bool active);
		~CleanerBot();
		//modifier
		CleanerBot& set(const char* location, double battery, int brush, bool active);
		void setLocation(const char* location); 
		bool setActive(bool active); 
		//queries
		const char* getLocation() const;
		double getBattery() const;
		int getBrush() const;
		bool isActive() const;
		bool isValid() const;
		void display() const;
	};
	int report(CleanerBot* bot, short num_bots);
	void sort(CleanerBot* bot, short num_bots);
}

#endif

