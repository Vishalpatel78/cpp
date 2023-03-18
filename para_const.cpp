#include<iostream>
using namespace std;
class Student
{
    int roll;
    char grade;
    float per;
public:
    Student(int , char , float);
    void get();
    void show();
    Student();
};
Student::Student()
{

}
Student::Student(int r, char g, float p)
{
    roll = r ;
    grade = g;
    per = p;
}
void Student::get()
{
    cout<<"Enter roll,grade,percentage :";
    cin>>roll>>grade>>per;
}
void Student::show()
{
    cout<<"Roll number is :"<<roll<<endl<<"grade is :"<<grade<<endl<<"percentage is :"<<per<<endl;
}
int main()
{
    Student s(183,'A',9.8);
    Student p;
    s.show();
    p.get();
    p.show();
    return 0;
}

// Second version of this code //
// Using Default parametrized consructor//
// There is a mistake in this below code//

/*class Student
{
    int roll;
    char grade;
    float per;
public:
    Student(int = 0, char = '', float = 0.0);
    void get();
    void show();
    Student();
};
Student::Student(int r, char g, float p)
{
    roll = r ;
    grade = g;
    per = p;
}
void Student::get()
{
    cout<<"Enter roll,grade,percentage :";
    cin>>roll>>grade>>per;
}
void Student::show()
{
    cout<<"Roll number is :"<<roll<<endl<<"grade is :"<<grade<<endl<<"percentage is :"<<per<<endl;
}
int main()
{
    Student s(183,'A',9.8);
    Student p;
    s.show();
    p.get();
    p.show();
    return 0;
}*/


