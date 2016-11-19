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
    Department();                                   //Constructor
    void setDepartmentName(string departmentName);  //Set function
    string getDepartmentName();                     //Get function

    void addStudent(string student);                //Add a student to studentList
    void printStudents();                           //Print out studentList

    void addTeacher(string teacher);                //Add a teacher to teacherList
    void printTeachers();                           //Print out teacherList

    void addCourse(string course);                  //Add a course to courseList
    void printCourses();                            //Print out courseList
};

#endif
