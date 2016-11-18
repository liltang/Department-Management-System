//=================================================================
//	MAIN.CPP
//	ERIKA WINTERS & LILY TANG
//  COP 3331
//=================================================================

#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"

using namespace std;

int main(){

	cout  << "MAIN" << endl;

	Person p(12);
	p.print();

  Student s(12, "cow");
	s.print();

	return 0;


}
