//=================================================================
//	COURSE.H
//	ERIKA WINTERS & LILY TANG
//  COP 3331
//=================================================================
#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <iostream>
#include <list>
#include <map>
#include "Student.h"
using namespace std;

class Student;

class Course {

	private:
	string courseName;
	string courseType;
	string courseTeacher;
	string courseTA;
	map<string, string> gradeList;

	public:
  Course(string courseName, string courseType, string courseTeacher);
	Course(string courseName, string courseType, string courseTeacher, string courseTA);
	string getCourseName(void);
	void addStudent(Student stud, string studentGrade);
  virtual void print(void);


};

#endif
