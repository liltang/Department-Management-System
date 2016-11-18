//=================================================================
//	PERSON.CPP
//	ERIKA WINTERS & LILY TANG
//  COP 3331
//=================================================================


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
  cout << "Person Constructor Called" << endl;
}

int Person::getUid(){
	return uid;
}

void Person::print(){

	cout << "Person's UID: #U" << this->uid << endl;

}
