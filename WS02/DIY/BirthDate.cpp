//**********************************************************************
//Workshop : #2 (P2)
//File     : BirthDate.cpp
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 5/30/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************

#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <cstdio>
#include <iostream>
#include "BirthDate.h"


using namespace std;
namespace sdds {

	Employee* workers;
	FILE* fptr;
	int numberOfEmployee;

	//Opens the datafile.If successful it will print Birthdate search programand returns true otherwise it will print Data file 
	//"filename goes here" not found!and return false;
	bool beginSearch(const char* filename) {

		bool result = false;

		fptr = fopen(filename, "r");
		if (fptr) {

			cout << "Birthdate search program" << endl;

			result = true;
		}
		else if (fptr == 0) {
			cout << "Data file" << '\"' << filename << '\"' << "not found!" << endl;
		}
		return result;
	}

	//Reads the birth records matching the month. If at least one record is matched and read, turns true, otherwise false
	bool readBirthDate(int month) {

		numberOfEmployee = 0;
		int numberOfRecord = 0;
		int Date, Month, Year;
		char temp[200];

		while (fscanf(fptr, "%[^,],", temp) == 1) {
			fscanf(fptr, "%d", &Month);
			if (Month == month) {
				numberOfEmployee++;
			}
			fscanf(fptr, "%[^\n]\n", temp);
		}

		workers = new Employee[numberOfEmployee];
		rewind(fptr);

		while (fscanf(fptr, "%[^,],", temp) == 1) {
			if (fscanf(fptr, "%d/%d/%d\n", &Month, &Date, &Year) == 3) {
				if (Month == month) {
					workers[numberOfRecord].m_name = new char[strlen(temp) + 1];
					strcpy(workers[numberOfRecord].m_name, temp);
					workers[numberOfRecord].m_monthOfBirth = Month;
					workers[numberOfRecord].m_dateOfBirth = Date;
					workers[numberOfRecord].m_yearOfBirth = Year;
					numberOfRecord++;
				}
			}
		}
		rewind(fptr);
		return numberOfEmployee > 0;
	}

	//Sorts the records based on the year of birth in descending order.
	void sort() {
		int i, j;
		Employee temp;
		for (i = numberOfEmployee - 1; i > 0; i--) {
			for (j = 0; j < i; j++) {
				if (workers[j].m_yearOfBirth > workers[j + 1].m_yearOfBirth) {
					temp = workers[j];
					workers[j] = workers[j + 1];
					workers[j + 1] = temp;
				}
			}
		}
	}

	//Displays the found records as displayed in the execution sample
	void displayBirthdays() {
		int i;

		cout << numberOfEmployee << " birthdates found:" << endl;

		for (i = 0; i < numberOfEmployee; i++) {

			cout << i + 1 << ") " << workers[i].m_name << ":" << endl;
			cout << workers[i].m_yearOfBirth << "-" << workers[i].m_monthOfBirth << "-" << workers[i].m_dateOfBirth << endl;
			cout << "===================================" << endl;
		}
	}

	//Releases all the dynamically allocated memory
	void deallocate() {
		int i;

		for (i = 0; i < numberOfEmployee; i++) {
			delete[] workers[i].m_name;
		}
		delete[] workers;

	}

	//Finalizes the program by making sure all resources are released and closed and then prints: Birthdate Search Program Closed.
	void endSearch() {

		cout << "Birthdate Search Program Closed." << endl;
		if (fptr) fclose(fptr);
	}


}





















