//=================================================================
//	TEACHER.H
//	ERIKA WINTERS  COP 3331
//=================================================================
#ifndef TEACHER_H
#define TEACHER_H


#include <string>
#include "Person.h"


class Teacher : public Person
{
  private:
    string teacherType;
  public:
    /*Student(string name, string bDay, int uid, char gender, string studentType); //constructor
    virtual void print(Student student); //print student*/


    Teacher(int uid, string teacherType);
    string getTeacherType(void);
    virtual void print(void);
};


#endif
