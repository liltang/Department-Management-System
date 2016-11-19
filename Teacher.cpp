//=================================================================
//	TEACHER.CPP
//	ERIKA WINTERS  COP 3331
//=================================================================
#include <stdlib.h>
#include <iostream>
#include "Teacher.h"
#include <string>

using namespace std;

Teacher::Teacher(string name, string bDay, string uid, string gender, string teacherType):Person(name, bDay, uid, gender)
{
  this->teacherType = teacherType;
}


string Teacher::getTeacherType()
{
  return teacherType;
}


void Teacher::print()
{
  cout << "Teacher " << endl;
  Person::print();
  cout << (*this).getName() << " is a " << (*this).teacherType << endl;

}
