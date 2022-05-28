//**********************************************************************
//Workshop : # (2P1)
//File     : File.cpp
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 5/20/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include "File.h"

namespace sdds {
   FILE* fptr;
   bool openFile(const char filename[]) {
      fptr = fopen(filename, "r");
      return fptr != NULL; 
   }

   int noOfRecords() {
      int noOfRecs = 0;
      char ch;
      while (fscanf(fptr, "%c", &ch) == 1) {
         noOfRecs += (ch == '\n');
      }
      rewind(fptr);
      return noOfRecs;
   }
   void closeFile() {
      if (fptr) fclose(fptr);
   }


   bool read(char* Cstring) {
     return fscanf(fptr, "%[^,],", Cstring) == 1;
   }

   bool read(int& studentNo) {
     return fscanf(fptr, "%d,", & studentNo) == 1;
   }

   bool read(char& studentGrade) {
       return fscanf(fptr, "%c\n", &studentGrade) == 1;
   }


}

