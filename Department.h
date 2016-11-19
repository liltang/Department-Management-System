#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
#include <list>
#include "Student.h"
#include "Teacher.h"
#include "Course.h"

class Department
{
  private:
    string departmentName;
    list<string> studentList;
    list<string> teacherList;
    list<string> courseList;
  public:
    Department();
    void setDepartmentName(string departmentName);
    string getDepartmentName();

    void addStudent(string student);
    void printStudents();

    void addTeacher(string teacher);
    void printTeachers();

    void addCourse(string course);
    void printCourses();
};

#endif
