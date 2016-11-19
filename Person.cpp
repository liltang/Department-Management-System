//=================================================================
//	PERSON.CPP
//	ERIKA WINTERS & LILY TANG
//  COP 3331
//=================================================================


#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person(string name, string bDay, string uid, string gender){

	this->name = name;
	this->bDay = bDay;
	this->uid = "U"+uid;
	this->gender = gender;

}

string Person::getName(){
	return name;

}
string Person::getbDay(){

	return bDay;
}

string Person::getUid(){
	return uid;
}

string Person::getGender(){
	return gender;

}
void Person::print(){

	cout << "Name: " << this->name << endl;
	cout << this->name << "'s Birthday: " << this->bDay << endl;
	cout << this->name << "'s UID: " << this->uid << endl;
	cout << this->name << "'s Gender: " << this->gender << endl;

}
