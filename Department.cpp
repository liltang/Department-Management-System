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

//Constructor
Department::Department(){}

//DepartmentName functions
void Department::setDepartmentName(string departmentName)
{
    this->departmentName = departmentName;
}
string Department::getDepartmentName()
{
  return departmentName;
}

//Student functions
void Department::addStudent(string student)
{
  studentList.push_back(student);
}
void Department::printStudents()
{
  cout << "Students in the " << getDepartmentName() << " Department:" << endl;
  for(list<string>::iterator it = studentList.begin(); it != studentList.end(); ++it)
    cout << *it << endl;
}

//Teacher functions
void Department::addTeacher(string teacher)
{
  teacherList.push_back(teacher);
}
void Department::printTeachers()
{
  cout << "Teachers in the " << getDepartmentName() << " Department:" << endl;
  for(list<string>::iterator it = teacherList.begin(); it != teacherList.end(); ++it)
    cout << *it << endl;
}

//Course functions
void Department::addCourse(string course)
{
  courseList.push_back(course);
}
void Department::printCourses()
{
  cout << "Courses in the " << getDepartmentName() << " Department:" << endl;
  for(list<string>::iterator it = courseList.begin(); it != courseList.end(); ++it)
    cout << *it << endl;
}
