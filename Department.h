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
    list<Student> studentList;
    list<Teacher> teacherList;
    list<Course> courseList;
  public:
    Department(string departmentName);
    string getDepartmentName();

    void addStudent(Student student);
    void printStudents();

    void addTeacher(Teacher teacher);
    void printTeachers();

    void addCourse(Course course);
    void printCourses();
};

#endif
