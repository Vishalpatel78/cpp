#include<iostream>
using namespace std;
class Student
{
    int roll;
    char grade ;
    float per;
public:
    Student();
    void show();
    ~Student();
};
Student::Student()
{
    cout<<"constructor called"<<endl;
    cout<<"Enter roll,grade,per";
    cin>>roll>>grade>>per;
}
void Student::show()
{
    cout<<"roll is :"<<roll<<endl<<"grade is "<<grade<<endl<<"percentage is :"<<per<<endl;
}
Student::~Student()
{
    cout<<"Destructor called";
}
int main()
{
    Student s;
    s.show();
}
