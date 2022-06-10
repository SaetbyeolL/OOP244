//**********************************************************************
//Workshop : #4 (P1)
//File     : Car.cpp
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 6/10/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************
#ifndef SDDS_CAR_H
#define SDDS_CAR_H

namespace sdds {

	class Car {
		char* m_type;
		char* m_brand;
		char* m_model;
		int m_year;
		int m_code;
		double m_price;
		void resetInfo(); 

	public:
		Car();
		Car(const char* type, const char* brand, const char* model, int year = 2022, int code = 100, double price = 1);
		~Car(); 
		Car& setInfo(const char* type,const char* brand,const char* model,int year,int code,double price); 
		void printInfo() const;
		bool isValid() const;
		bool isSimilarTo(const Car& car) const;
	};

	bool has_similar(const Car car[], const int num_cars);
	bool has_invalid(const Car car[], const int num_cars);
	void print(const Car car[], const int num_cars);
}
#endif


























