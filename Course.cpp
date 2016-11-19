//=================================================================
//	COURSE.CPP
//	ERIKA WINTERS & LILY TANG
//  COP 3331
//=================================================================

#include <iostream>
#include <string>
#include <map>
#include "Course.h"
#include "Student.h"

using namespace std;

Course::Course(string courseName, string courseType, string courseTeacher){
	this->courseName = courseName;
	this->courseType = courseType;
	this->courseTeacher = courseTeacher;
	this->courseTA = "";
  cout << "Course Constructor Called" << endl;
	//gradeList["d"] = "studentGrade";

}
Course::Course(string courseName, string courseType, string courseTeacher, string courseTA){
	this->courseName = courseName;
	this->courseType = courseType;
	this->courseTeacher = courseTeacher;
	this->courseTA = courseTA;
  cout << "Course Constructor Called" << endl;
	//gradeList["d"] = "studentGrade";

}

string Course::getCourseName(){
	return courseName;
}
// void Course::addStudent(Student stud){
//
// }

void Course::addStudent(Student stud, string studentGrade){
	 if(stud.getStudentType().compare(this->courseType)== 0){
	 string id = stud.getUid() + " " + stud.getName();
	 gradeList[id] = studentGrade;
 }else{
	 cout << "Student is type " << stud.getStudentType() << " and cannot register for " << this->courseType << " course." << endl;
 }

}


void Course::print(){

	cout << "Course " << this->courseName << " is taught by " << this->courseTeacher << endl;
	if(this->courseTA.length() > 0) {cout << "The TA is: " << this->courseTA << endl;}
	cout << "The following students are taking this course: " << endl;
	for(auto it = gradeList.begin(); it!= gradeList.end(); ++it){
		cout << it->first << "\t" << it->second <<  endl;

	}

}
