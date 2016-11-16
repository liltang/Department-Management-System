//=================================================================
//	TEACHER.H
//	ERIKA WINTERS  COP 3331
//=================================================================
#include <string>

class Teacher : public Person
{
  private:
    string teacherType;
  public:
    Teacher(string name, string bDay, int uid, char gender, string teacherType); //constructor
    virtual void print(Teacher teacher); //print teacher
}
