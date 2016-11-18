//=================================================================
//	MAIN.CPP
//	ERIKA WINTERS & LILY TANG
//  COP 3331
//	g++ main.cpp Person.cpp Person.h Student.cpp Student.h Teacher.cpp Teacher.h Course.cpp Course.h Department.cpp Department.h
//=================================================================

#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include "Department.h"

using namespace std;

int main(){

	cout  << "MAIN" << endl;

  Student s("Erika Winters","02/03/1995",1234,'F',"Undergraduate");
	Teacher t("Raymond James","06/23/1979",4321,'M',"Adjunct");
	Course c("Programming");
	Department d("Computer Science");

	d.addStudent(s);
	d.addTeacher(t);
	d.addCourse(c);

	d.printStudents();
	d.printTeachers();
	d.printCourses();

	return 0;
}
