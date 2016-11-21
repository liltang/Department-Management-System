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
#include <map>

using namespace std;

int main(){

	vector<Student>studentlist;
  int i = 0;

	ifstream fin("Students.txt");

	    string name, bday, uid, gender, type;

	    while (fin >> name >> bday >> uid >> gender >> type)
	    {
					Student newStudent(name, bday, uid, gender, type);
					studentlist.push_back(newStudent);
	        /* do something with name, var1 etc. */
	        //cout << name << bday << uid << gender << type << endl;
	    }

			for(i = 0; i < studentlist.size(); i++){
					//cout << studentlist[i].getName() << endl;
					//studentlist[i].print();
			}

//---BEGIN
//THIS IS THE PART TO READ IN COURSES
vector<Course>clist;
ifstream courseFile("Courses.txt");
char delimiter(',');
string courseName, courseType, courseTeacher, courseTA;

if(courseFile.is_open())
{
  for(i = 0; i < 4; i++)
  {
    getline(courseFile, courseName, delimiter);
    getline(courseFile, courseType, delimiter);
    getline(courseFile, courseTeacher, delimiter);
    getline(courseFile, courseTA);

    Course newCourse(courseName, courseType, courseTeacher, courseTA);
    clist.push_back(newCourse);
  }
}
courseFile.close();

cout << clist.size() << endl;//should return 4
//---END

/*string tempcourse = "";
			ifstream fin2("Courses.txt");

		  string cname, ctype, teacher, ta, sname, grade;

					while (fin2 >> cname >> ctype >> teacher >> ta >> sname >> grade)
					{
							Course newCourse(cname, ctype, teacher, ta);
							if(tempcourse != newCourse.getCourseName()){
							clist.push_back(newCourse);
						}else{ cout << "Already exists" << endl;}
							tempcourse = newCourse.getCourseName();
							/* do something with name, var1 etc. */
							//cout << name << bday << uid << gender << type << endl;
				/*	}

					for(int i = 0; i < clist.size(); i++){
							clist[i].print();
					}*/


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
