/* ------------------------------------------------------
Workshop 2 part 1
Module: N/A
Filename: gradeReport.cpp 
  in submission this file will be replaced with main_prof.cpp
  that loads "simpsons.csv" instead
Version 1
Revision History
-----------------------------------------------------------
Date       Reason
-----------------------------------------------------------*/
//**********************************************************************
//Workshop : #2 (P1)
//File     : gradeReport.cpp
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 5/20/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************


#include "Student.h"
using namespace sdds;
int main() {
   if (load("students.csv")) {
      display();
   }
   deallocateMemory();
   return 0;
}


