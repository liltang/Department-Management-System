//=================================================================
//	MAIN.CPP
//	ERIKA WINTERS & LILY TANG
//  COP 3331
//	g++ main.cpp Person.cpp Person.h Student.cpp Student.h Teacher.cpp Teacher.h Course.cpp Course.h Department.cpp Department.h
//=================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include "Department.h"

using namespace std;

int main(){

	cout  << "MAIN" << endl;

	ifstream departmentFile ("Departments.txt");
	string departmentName, courseName, teacherName, studentName;
	char delimiter(',');
	int i = 0, j;

	vector<Department> departmentVector;

	if(departmentFile.is_open())
	{
		while(i < 2)
		{
			getline(departmentFile, departmentName, delimiter);
			Department newDepartment;

			departmentVector.push_back(newDepartment);
			departmentVector[i].setDepartmentName(departmentName);

			for(j = 0; j < 2; j++)
			{
				getline(departmentFile, courseName, delimiter);
				departmentVector[i].addCourse(courseName);
			}

			getline(departmentFile, teacherName, delimiter);
			departmentVector[i].addTeacher(teacherName);

			for(j = 0; j < 3; j++)
			{
				getline(departmentFile, studentName, delimiter);
				departmentVector[i].addStudent(studentName);
			}

			i++;
		}
	}

	departmentFile.close();

for(i = 0; i < departmentVector.size(); i++)
{
	cout << "INFORMATION FOR: " << departmentVector[i].getDepartmentName() << endl;
	departmentVector[i].printCourses();
	departmentVector[i].printTeachers();
	departmentVector[i].printStudents();
}

	return 0;
}
