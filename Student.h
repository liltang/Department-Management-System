//=================================================================
//	STUDENT.H
//	ERIKA WINTERS & LILY TANG
//  COP 3331
//=================================================================
#ifndef STUDENT_H
#define STUDENT_H


#include <string>
#include "Person.h"


class Student : public Person
{
  private:
    string studentType;
  public:
    /*Student(string name, string bDay, int uid, char gender, string studentType); //constructor
    virtual void print(Student student); //print student*/


    Student(int uid, string studentType);
    string getStudentType(void);
    virtual void print(void);
};


#endif

