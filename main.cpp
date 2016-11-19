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
	//list<Department> departmentList;

	vector<Department> departmentVector;

	if(departmentFile.is_open())
	{
		getline(departmentFile, departmentName, delimiter);
		cout << "did it get departname? " << departmentName <<endl;
		Department newDepartment;
		departmentVector.push_back(newDepartment);
		departmentVector[0].setDepartmentName(departmentName);
		getline(departmentFile, courseName, delimiter);
		cout << "did it get course? " << courseName <<endl;

		departmentVector[0].addCourse(courseName);
		getline(departmentFile, courseName, delimiter);
		departmentVector[0].addCourse(courseName);
		getline(departmentFile, teacherName, delimiter);
		departmentVector[0].addTeacher(teacherName);
		getline(departmentFile, studentName, delimiter);
		departmentVector[0].addStudent(studentName);
		getline(departmentFile, studentName, delimiter);
		departmentVector[0].addStudent(studentName);
		getline(departmentFile, studentName, delimiter);
		departmentVector[0].addStudent(studentName);

	}
	departmentFile.close();



	departmentVector[0].printStudents();
	departmentVector[0].printTeachers();
	departmentVector[0].printCourses();

	/*Department* d = new Department("bitches");
	d->addStudent("Erika");
	d->addStudent("Lily");
	d->printStudents();*/

  /*Student s("Erika Winters","02/03/1995",1234,'F',"Undergraduate");
	Teacher t("Raymond James","06/23/1979",4321,'M',"Adjunct");
	Course c("Programming");
	Department d("Computer Science");

	d.addStudent(s);
	d.addTeacher(t);
	d.addCourse(c);

	d.printStudents();
	d.printTeachers();
	d.printCourses();*/

	return 0;
}
