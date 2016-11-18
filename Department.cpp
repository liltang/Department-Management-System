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

Department::Department(string departmentName)
{
  cout << "Department constructor called" << endl;
  this->departmentName = departmentName;
}

string Department::getDepartmentName()
{
  return departmentName;
}

void Department::addStudent(Student student)
{
  studentList.push_back(student);
}

void Department::printStudents()
{
  cout << "Students in the " << getDepartmentName() << " Department:" << endl;
  for(list<Student>::iterator it = studentList.begin(); it != studentList.end(); ++it)
    it->print();
}

void Department::addTeacher(Teacher teacher)
{
  teacherList.push_back(teacher);
}

void Department::printTeachers()
{
  cout << "Teachers in the " << getDepartmentName() << " Department:" << endl;
  for(list<Teacher>::iterator it = teacherList.begin(); it != teacherList.end(); ++it)
    it->print();
}

void Department::addCourse(Course course)
{
  courseList.push_back(course);
}

void Department::printCourses()
{
  cout << "Courses in the " << getDepartmentName() << " Department:" << endl;
  for(list<Course>::iterator it = courseList.begin(); it != courseList.end(); ++it)
    it->print();
}
