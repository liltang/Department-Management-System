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
  Person::print();
  cout << "Teacher's name: " << (*this).getName() << endl;
  cout << (*this).getName() << " is a " << (*this).teacherType << endl;

}
