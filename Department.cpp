//=================================================================
//	DEPARTMENT.CPP
//	ERIKA WINTERS  COP 3331
//=================================================================
#include <stdlib.h>
#include <iostream>
#include "Department.h"
#include "Student.h"
#include <string>
#include <list>

using namespace std;

Department::Department()
{
  cout << "Department constructor called" << endl;
}

void Department::addStudent(Student student)
{
  studentList.push_back(student);
}

void Department::printStudents()
{
  cout << "Students in department:" << endl;
  for(list<Student>::iterator it = studentList.begin(); it != studentList.end(); ++it)
    cout << it->getStudentType() << endl;
}
