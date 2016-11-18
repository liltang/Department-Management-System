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

using namespace std;

class Student;

class Course {

	private:
	//string name;
	//string bDay;
	string courseName;
	//char gender;
	//list<int> studentList;
	void addStudent(Student stud);

	public:
	//Person(string name, string bDay, int uid, char gender);
	Course(string courseName);
	string getCourseName(void);
  virtual void print(void);

	//friend Student;

};

#endif
