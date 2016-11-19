//=================================================================
//	PERSON.H
//	ERIKA WINTERS & LILY TANG
//  COP 3331
//=================================================================
#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using namespace std;

class Person {

	private:
	string name;
	string bDay;
	string uid;
	string gender;

	public:
	Person(string name, string bDay, string uid, string gender);
	string getName(void);
	string getbDay(void);
	string getUid(void);
	string getGender(void);
  virtual void print(void);

};

#endif
