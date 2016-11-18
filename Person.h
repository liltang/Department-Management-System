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
	//string name;
	//string bDay;
	int uid;
	//char gender;

	public:
	//Person(string name, string bDay, int uid, char gender);
	Person(int uid);
	int getUid(void);
  virtual void print(void);

};

#endif
