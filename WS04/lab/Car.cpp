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
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include <iomanip>
#include "Car.h"

using namespace std;
namespace sdds {
	void Car::resetInfo() {
		m_type = nullptr;
		m_brand = nullptr;
		m_model = nullptr;
		m_year = 0;
		m_code = 0;
		m_price = 0;
	}

	Car::Car() {
		resetInfo();
	}

	Car::Car(const char* type, const char* brand, const char* model, int year, int code, double price) {
		if (type && type[0] != '\0' && brand && brand[0] != '\0' && model && model[0] != '\0' && year >= 1990 && code >= 100 && code < 1000 && price>0) {
			m_type = new char[strlen(type) + 1];
			strcpy(m_type, type);
			m_brand = new char[strlen(brand) + 1];
			strcpy(m_brand, brand);
			m_model = new char[strlen(model) + 1];
			strcpy(m_model, model);
			m_year = year;
			m_code = code;
			m_price = price;
		}
		else resetInfo();
	}

	Car::~Car() {
		delete[] m_type;
		delete[] m_brand;
		delete[] m_model;
	}

	Car& Car::setInfo(const char* type, const char* brand, const char* model, int year =2022, int code=100, double price=1) {
		delete[] m_type; 
		delete[] m_brand;
		delete[] m_model;

		if (type && type[0] != '\0' && brand && brand[0] != '\0' && model && model[0] != '\0' && year >= 1990 && code >= 100 && code < 1000 && price>0) {
			m_type = new char[strlen(type) + 1];
			strcpy(m_type, type);
			m_brand = new char[strlen(brand) + 1];
			strcpy(m_brand, brand);
			m_model = new char[strlen(model) + 1];
			strcpy(m_model, model);
			m_year = year;
			m_code = code;
			m_price = price;
		}
		else {
			resetInfo();
		}
		return *this;
	}
	
	void Car::printInfo() const{

		cout << fixed << setprecision(2) << left << "| " << setw(10) << m_type;
		cout << " | " << setw(16) << m_brand << " | " << setw(16) << m_model;
		cout << right << " | " << m_year << " | " << setw(4) << m_code << " | " << setw(9) << m_price << " |" << endl;
	}

	bool Car::isValid() const
	{
		return (m_type && m_type[0] != '\0' && m_brand && m_brand[0] != '\0' && m_model && m_model[0] != '\0' && m_year >= 1990 && m_code >= 100 && m_code < 1000 && m_price>0);
	}

	bool Car::isSimilarTo(const Car& car) const
	{
		return (isValid() && car.isValid() && !strcmp(m_type, car.m_type) && !strcmp(m_brand, car.m_brand) && !strcmp(m_model, car.m_model) && m_year == car.m_year);
	}
	bool has_similar(const Car car[], const int num_cars)
	{
		bool result = false;
		for (int i = 0; i < num_cars && !result; i++) {
			for (int j = i + 1; j < num_cars && !result; j++) {
				if (car[i].isSimilarTo(car[j])) {
					result = true;
				}
			}
		}
		return result;
	}
	bool has_invalid(const Car car[], const int num_cars)
	{
		bool result = false;
		for (int i = 0; i < num_cars && !result; i++) {
			if (!car[i].isValid()) result = true;
		}
		return result;
	}

	void print(const Car car[], const int num_cars)
	{
		for (int i = 0; i < num_cars; i++) {
			if (car[i].isValid()) car[i].printInfo();
		}
	}
}





















