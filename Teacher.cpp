//=================================================================
//	TEACHER.CPP
//	ERIKA WINTERS  COP 3331
//=================================================================
#include <stdlib.h>
#include <iostream>
#include "teacher.h"
#include <string>

using namespace std;

Teacher::Teacher(string name, string bDay, int uid, char gender, string teacherType):Person(name, bDay, uid, gender)
{
  cout << "Teacher Constructor Called" << endl;
  this->teacherType = teacherType;
}


string Teacher::getTeacherType()
{
  return teacherType;
}

void Teacher::print()
{
  Person::print();
  cout << (*this).getName() << " is a(n) " << (*this).getTeacherType() << endl;
}
