//=================================================================
//	MAIN.CPP
//	ERIKA WINTERS & LILY TANG
//  COP 3331
//=================================================================

#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Course.h"

using namespace std;

int main(){

	cout  << "MAIN" << endl;
	Student s("Erika", "12/12/12", 1234, 'F', "undergrad");
  s.print();
	// Person p(12);
	// p.print();
	//
  // Student s(123324, "cow");
	// s.addCourse(Course("math"));
	// s.print();
	//
	// Course c("program");
	//c.addStudent(3);

	return 0;


}
