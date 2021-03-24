//Furkan Yalçýn 20181701039

//this file is header file of Student.cpp
#pragma once
#include <string>
using namespace std;
class Student
{
private:
	//These are private variables.
	string name;
	string middleName;
	string lastName;
	double GPA;

public:
	void setStudentName(string studentName);
	string getStudentName();
	void setStudentMiddleName(string studentMiddleName);
	string getStudentMiddleName();
	void setStudentLastname(string studentLastname);
	string getStudentLastname();
	void setStudentGPA(double studentGPA);
	double getStudentGPA();
};

