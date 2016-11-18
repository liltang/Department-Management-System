//=================================================================
//	COURSE.CPP
//	ERIKA WINTERS & LILY TANG
//  COP 3331
//=================================================================

#include <iostream>
#include <string>

#include "Course.h"

using namespace std;

Course::Course(string courseName){
	this->courseName = courseName;
  cout << "Course Constructor Called" << endl;
}

string Course::getCourseName(){
	return courseName;
}
// void Course::addStudent(Student stud){
//
// }

void Course::print(){

	cout << "Course print function" << endl;

}
