#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

/*Person::Person(string name, string bDay, int uid, char gender){

	this->name = name;
	this->bDay = bDay;
	this->uid = uid;
	this->gender = gender;
}*/

Person::Person(int uid){

	this->uid = uid;
  cout << "CONSTRUCTOR CALLED" << endl;
}

int Person::getUid(){
	return uid;
}

void Person::print(){

	cout << "ID is: " << this->uid << endl;

}
