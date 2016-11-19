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
#include "Teacher.h"
#include <sstream>
#include <fstream>
#include <vector>
#include <map>

using namespace std;

int main(){

	vector<Student>studentlist;

	ifstream fin("Students.txt");

	    string name, bday, uid, gender, type, cour;

	    while (fin >> name >> bday >> uid >> gender >> type >> cour)
	    {
					Student newStudent(name, bday, uid, gender, type);
					newStudent.addCourse(cour);
					studentlist.push_back(newStudent);
	        /* do something with name, var1 etc. */
	        //cout << name << bday << uid << gender << type << endl;
	    }

			for(int i = 0; i < studentlist.size(); i++){
					//cout << studentlist[i].getName() << endl;
					studentlist[i].print();
			}

			cout << endl;


	vector<Teacher>teacherlist;
			ifstream fin2("Teachers.txt");

					string tname, tbday, tuid, tgender, ttype;

					while (fin2 >> tname >> tbday >> tuid >> tgender >> ttype)
					{
							Teacher newTeacher(tname, tbday, tuid, tgender, ttype);
							teacherlist.push_back(newTeacher);
					}

					for(int i = 0; i < teacherlist.size(); i++){
							//cout << studentlist[i].getName() << endl;
							teacherlist[i].print();
					}

//COURSE
// vector<Course>clist;
// string tempcourse = "";
// 			ifstream fin2("Courses.txt");
//
// 		  string cname, ctype, teacher, ta, sname, grade;
//
// 					while (fin2 >> cname >> ctype >> teacher >> ta >> sname >> grade)
// 					{
// 							Course newCourse(cname, ctype, teacher, ta);
// 							if(tempcourse != newCourse.getCourseName()){
// 							clist.push_back(newCourse);
// 						}else{ cout << "Already exists" << endl;}
// 							tempcourse = newCourse.getCourseName();
// 							/* do something with name, var1 etc. */
// 							//cout << name << bday << uid << gender << type << endl;
// 					}
//
// 					for(int i = 0; i < clist.size(); i++){
// 							clist[i].print();
// 					}


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
