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
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

int main(){

	vector<Student>studentlist;

	ifstream fin("Students.txt");

	    string name, bday, uid, gender, type;

	    while (fin >> name >> bday >> uid >> gender >> type)
	    {
					Student newStudent(name, bday, uid, gender, type);
					studentlist.push_back(newStudent);
	        /* do something with name, var1 etc. */
	        //cout << name << bday << uid << gender << type << endl;
	    }

			for(int i = 0; i < studentlist.size(); i++){
					//cout << studentlist[i].getName() << endl;
					studentlist[i].print();
			}

		

	// ifstream inputFile("Students.txt");
	//     string line;
	//
	//     while (getline(inputFile, line))
	//     {
	//         istringstream ss(line);
	//
	//         string name, bday, uid, gender, type;
	//
	//         ss >> name >> bday >> uid >> gender >> type;
	// 				cout << name << bday << uid << gender << type << endl;
	//     }

	// cout  << "MAIN" << endl;
	// Student s("Erika", "12/12/12", "1234", "F", "undergrad");
  // s.print();
	//
	// Student l("Lily", "1/1/1", "0926504", "M", "undergrad");
	//
	// Course c("algebra", "undergrad", "Prof.Bob", "TA Greg");
	// c.addStudent(s, "90.3");
	// c.addStudent(l, "23");
	// c.print();


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
