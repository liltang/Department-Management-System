//=================================================================
//	STUDENT.CPP
//	ERIKA WINTERS & LILY TANG
//  COP 3331
//=================================================================


#include <stdlib.h>
#include <iostream>
#include "Student.h"
#include "Course.h"
#include <string>
#include <list>

using namespace std;


Student::Student(string name, string bDay, string uid, string gender, string studentType):Person(name, bDay, uid, gender)
{
  cout << "Student Constructor Called" << endl;
  this->studentType = studentType;
}

string Student::getStudentType()
{
  return studentType;
}

void Student::addCourse(string c){

    courseList.push_back(c);
}


void Student::print()
{
  Person::print();
  cout << (*this).getName() << " is a " << (*this).studentType << " Student" << endl;

}
