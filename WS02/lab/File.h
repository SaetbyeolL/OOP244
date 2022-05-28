//**********************************************************************
//Workshop : # 2(P1)
//File     : File.h
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 5/20/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************

#ifndef SDDS_FILE_H_
#define SDDS_FILE_H_

namespace sdds {

   bool openFile(const char filename[]);
   void closeFile();
   int noOfRecords();

   bool read(char* Cstring);
   bool read(int& studentNo);
   bool read(char& studentGrade);
}
#endif // !SDDS_FILE_H_
