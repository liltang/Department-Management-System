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


Student::Student(int uid, string studentType):Person(uid)
{
  cout << "Student Constructor Called" << endl;
  this->studentType = studentType;
}


string Student::getStudentType()
{
  return studentType;
}

void Student::addCourse(Course c){

    courseList.push_back(c);
}


void Student::print()
{
  cout << "Student's name: " << (*this).studentType << endl;
  cout << "Student's UID: #U" << (*this).getUid() << endl;
  for(list<Course>::iterator it = courseList.begin(); it!= courseList.end(); ++it){
    cout << it->getCourseName() << endl;

  }


}
