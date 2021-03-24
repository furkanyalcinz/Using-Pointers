//Furkan Yalçın 20181701039
#include "Student.h"
#include <iostream>

int main()
{
	int studentNumber;
	string studentName;
	string studentMiddleName;
	string studentLastname;
	double studentGPA;

	cout << "How many students would you like to process" << endl;
	cin >> studentNumber;
	Student* student = new Student[studentNumber];
	for (int i = 0; i < studentNumber; i++)
	{
		//I think everything is clear that is why I did not put any comments this page.
		cout << "Enter firts name of student " + to_string(i+1) << endl;
		cin >> studentName;
		student[i].setStudentName(studentName);

		cout << "Enter middle name of student " + to_string(i+1) << endl;
		cin >> studentMiddleName;
		student[i].setStudentMiddleName(studentMiddleName);

		cout << "Enter last name of student " + to_string(i+1) << endl;
		cin >> studentLastname;
		student[i].setStudentLastname(studentLastname);

		cout << "Enter GPA of student " + to_string(i+1) << endl;
		cin >> studentGPA;
		student[i].setStudentGPA(studentGPA);
		
	}

	cout << "Students:" << endl;
	cout << "-------------------------------" << endl;

	for (int i = 0; i < studentNumber; i++)
	{
		cout << student[i].getStudentName() + " " + student[i].getStudentMiddleName() + " " + student[i].getStudentLastname() + " " + to_string(student[i].getStudentGPA()) << endl;
	}
}


