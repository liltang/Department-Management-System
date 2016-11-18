//=================================================================
//	PERSON.CPP
//	ERIKA WINTERS & LILY TANG
//  COP 3331
//=================================================================


#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person(string name, string bDay, int uid, char gender){

	this->name = name;
	this->bDay = bDay;
	this->uid = uid;
	this->gender = gender;
	cout << "Person Constructor Called" << endl;

}

string Person::getName(){
	return name;

}
string Person::getbDay(){

	return bDay;
}

int Person::getUid(){
	return uid;
}

char Person::getGender(){
	return gender;

}
void Person::print(){

	cout << "Name: " << this->name << endl;
	cout << this->name << "'s Birthday: " << this->bDay << endl;
	cout << this->name << "'s UID: #U" << this->uid << endl;
	cout << this->name << "'s Gender: " << this->gender << endl;

}
