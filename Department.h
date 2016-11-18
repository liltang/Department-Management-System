#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
#include <list>
#include "Student.h"

class Department
{
  private:
    list <Student> studentList;
  public:
    Department();
    void addStudent(Student student);
    void printStudents();
};

#endif
