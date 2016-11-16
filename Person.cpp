#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person(string name, string bDay, int uid, char gender){
	
	this->name = name;
	this->bDay = bDay;
	this->uid = uid;
	this->gender = gender;
}

