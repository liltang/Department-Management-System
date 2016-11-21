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


        cout << studentlist[1].getName() << endl;

//---BEGIN
//THIS IS THE PART TO READ IN COURSES
vector<Course>clist;
ifstream courseFile("Courses.txt");
char delimiter(',');
string courseName, courseType, courseTeacher, courseTA;

if(courseFile.is_open())
{
  for(int i = 0; i < 4; i++)
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

for(int i = 0; i < clist.size(); i++){
        //if(clist[i].getCourseName.compare() == 0){
        clist[i].print();
        cout << endl;
}

//---END

for(int i = 0; i < studentlist.size(); i++){
        cout << "i: " << i << endl;
        cout << "studentlist[i] : " << studentlist[i].getName() << endl;
}

ifstream fin2("Grades.txt");

            string coursename, studentname, grade;

                int counter = -1;
                string prev = "";
            while (fin2 >> coursename >> studentname >> grade)
            {

                cout << "counter is: " << counter << endl;
                cout << coursename << "---" << studentname << "----" << grade << endl;

                for(int i = 0; i < studentlist.size(); i++){
                        cout << "student name at " << i << " is " << studentlist[i].getName() << endl;
                        cout << "course being checked is " << coursename << endl;
                        if((studentlist[i].getName()).compare(studentname) == 0){
                        cout << "match found for student " << studentname << endl;
                        string s1 = studentlist[i].getCourse();
                        cout << "s1 is : " << s1 << " for student " << studentname << " or " << studentlist[i].getName() << endl;
                        if(s1.find(coursename) != std::string::npos){
                                if(prev.compare(coursename)!= 0){
                                counter++;
                                prev = coursename;
                                }
                                clist[counter].addStudent(studentlist[i], grade);
                        }
                        }
                }
            }

                        for(int i = 0; i < clist.size(); i++){
                                        //cout << studentlist[i].getName() << endl;
                                        clist[i].print();
                        }

                        cout << endl;
  return 0;


}
