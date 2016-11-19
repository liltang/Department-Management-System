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
  Teacher(string name, string bDay, string uid, string gender, string teacherType);
  string getTeacherType(void);
  virtual void print(); //print student*/
};


#endif
