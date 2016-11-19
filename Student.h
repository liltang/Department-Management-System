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


class Student : public Person
{
  private:
    string studentType;
    list<string> courseList;
  public:
    Student(string name, string bDay, string uid, string gender, string studentType); //constructor
    string getStudentType(void);
    void addCourse(string c);
    virtual void print(void);
};


#endif
