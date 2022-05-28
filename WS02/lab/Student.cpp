//**********************************************************************
//Workshop : # 2(P1)
//File     : Student.cpp
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
#include <cstring>
#include <iostream>
#include "File.h"
#include "Student.h"

using namespace std;

namespace sdds {
    int noOfStudents;
    Student* students;

    void sort() {
        int i, j;
        Student temp;
        for (i = noOfStudents - 1; i > 0; i--) {
            for (j = 0; j < i; j++) {
                if (students[j].m_grade > students[j + 1].m_grade) {
                    temp = students[j];
                    students[j] = students[j + 1];
                    students[j + 1] = temp;
                }
            }
        }
    }

    bool load(Student& studentInfo) {
        char temp[128];
        bool result = false;
        if (read(temp) && read(studentInfo.m_studentNumber) && read(studentInfo.m_grade)) {
            studentInfo.m_name = new char[strlen(temp) + 1]; //dynamic memory
            strcpy(studentInfo.m_name, temp);
            result = true;
        }
        return result;
    }

        bool load(const char* fileName) {
            int studentCount = 0;
            bool result = false;

            if (openFile(fileName)) {
                noOfStudents = noOfRecords();
                students = new Student[noOfStudents]; //dynamic memory

            for (int i = 0; i < noOfStudents; i++) {
                if (load(students[i])) {
                    studentCount++;
                }
                else {
                    result = true;
                };
            }

                if (studentCount != noOfStudents) {
                    cout << "Error: incorrect number of records read; the data is possibly corrupted." << endl;
                }
                else result = true;

                closeFile();
            }
            else cout << "Can't open file " << fileName << endl;
            return result;
        }

        void display(const Student & reference) {

            cout << reference.m_name << ", " << reference.m_studentNumber << ": " << reference.m_grade << endl;
        }

        void display() {

            sort();
            for (int i = 0; i < noOfStudents; i++) {
                cout << i + 1 << ": ";
                display(students[i]);
            }
        }

        void deallocateMemory() {

            for (int i = 0; i < noOfStudents; i++) {
                delete[] students[i].m_name;
            }
            delete[] students;
        }






}





