//Furkan Yalçýn 20181701039
#include "Student.h"
#include<iostream>

void Student::setStudentName(string studentName) //This function sets student's name
{
	name = studentName;
}
string Student::getStudentName()//This function get student's name
{
	return name;
}
void Student::setStudentMiddleName(string studentMiddleName)//This function sets student's middle name
{
		middleName = studentMiddleName;
}
string Student::getStudentMiddleName()//This function get student's middle name
{
	return middleName;
}
void Student::setStudentLastname(string studentLastname)//This function sets student's lastname
{
	lastName = studentLastname;
}
string Student::getStudentLastname()//This function get student's lastname
{
	return lastName;
}
void Student::setStudentGPA(double studentGPA)//This function sets student's gpa
{
	try
	{
		if (studentGPA >= 0)
			GPA = studentGPA;
	}
	catch (const std::exception&)
	{
		throw "GPA must be bigger or equal 0!";
	}
}
double Student::getStudentGPA()//This function get student's gpa
{
	return GPA;
}