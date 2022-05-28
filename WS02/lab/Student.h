//**********************************************************************
//Workshop : #2 (P1)
//File     : Student.h
//Full Name : Saetbyeol Lim
//Student ID# : 149814212
//Email : slim62@myseneca.ca
//Date : 5/20/2022 
//Comment :
//I have done all the coding by myself and only copied the code 
//that my professor provided to complete my workshops and assignments.
//**********************************************************************

#ifndef SDDS_STUDENT_H_
#define SDDS_STUDENT_H_

namespace sdds {
    struct Student {
        char* m_name;
        int m_studentNumber;
        char m_grade;
    };

    void sort();
    bool load(Student& studentInfo);
    bool load(const char* fileName);
    void display(const Student& reference);
    void display();
    void deallocateMemory();


}
#endif // !SDDS_FILE_H_

