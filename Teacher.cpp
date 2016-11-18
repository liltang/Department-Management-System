//=================================================================
//	TEACHER.CPP
//	ERIKA WINTERS  COP 3331
//=================================================================
#include <stdlib.h>
#include <iostream>
#include "teacher.h"
#include <string>

using namespace std;

Teacher::Teacher(int uid, string teacherType):Person(uid)
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
  cout << "Teacher's name: " << (*this).teacherType << endl;
  cout << "Teacher's UID: #U" << (*this).getUid() << endl;


}
