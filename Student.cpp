//=================================================================
//	STUDENT.CPP
//	ERIKA WINTERS & LILY TANG
//  COP 3331
//=================================================================


#include <stdlib.h>
#include <iostream>
#include "Student.h"
#include <string>


using namespace std;


Student::Student(int uid, string studentType):Person(uid)
{
  cout << "Student Constructor Called" << endl;
  this->studentType = studentType;
}


string Student::getStudentType()
{
  return studentType;


}


void Student::print()
{
  cout << "Student's name: " << (*this).studentType << endl;
  cout << "Student's UID: #U" << (*this).getUid() << endl;


}
//Constructor
/*Student::Student(string name, string bDay, int uid, char gender, string studentType):Person(string name, string bDay, int uid, char gender)
{
  studentType = studentType;
}


//Print Student
void Student::print(Student student)
{


}*/

