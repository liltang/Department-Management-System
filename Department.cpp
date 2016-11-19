//=================================================================
//	DEPARTMENT.CPP
//	ERIKA WINTERS  COP 3331
//=================================================================
#include <stdlib.h>
#include <iostream>
#include <string>
#include <list>
#include "Department.h"
#include "Student.h"
#include "Teacher.h"
#include "Course.h"

using namespace std;

Department::Department()
{
  cout << "Department constructor called" << endl;
}

void Department::setDepartmentName(string departmentName)
{
    this->departmentName = departmentName;
}

string Department::getDepartmentName()
{
  return departmentName;
}

void Department::addStudent(string student)
{
  studentList.push_back(student);
  cout << "student added" << endl;
}

void Department::printStudents()
{
  cout << "Students in the " << getDepartmentName() << " Department:" << endl;
  for(list<string>::iterator it = studentList.begin(); it != studentList.end(); ++it)
    cout << *it << endl;
}

void Department::addTeacher(string teacher)
{
  teacherList.push_back(teacher);
  cout << "teach added" << endl;
}

void Department::printTeachers()
{
  cout << "Teachers in the " << getDepartmentName() << " Department:" << endl;
  for(list<string>::iterator it = teacherList.begin(); it != teacherList.end(); ++it)
    cout << *it << endl;
}

void Department::addCourse(string course)
{
  courseList.push_back(course);
  cout << "course added" << endl;
}

void Department::printCourses()
{
  cout << "Courses in the " << getDepartmentName() << " Department:" << endl;
  for(list<string>::iterator it = courseList.begin(); it != courseList.end(); ++it)
    cout << *it << endl;
}
