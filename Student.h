//=================================================================
//	STUDENT.H
//	ERIKA WINTERS & LILY TANG
//  COP 3331
//=================================================================
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <list>
#include "Person.h"
#include "Course.h"

//class Course;
class Student : public Person
{
  private:
    string studentType;
    list<Course> courseList;
  public:
    Student(string name, string bDay, int uid, char gender, string studentType); //constructor
    string getStudentType(void);
    void addCourse(Course c);
    virtual void print(void);
};

#endif
