#include<iostream>
#include<string.h>
using namespace std;
class Emp
{
    int age;
    char name[20];
    float sal;
 public:
       Emp( int , char* , float);
       void get();
       void show();
};
Emp::Emp( int a, char* p , float s)
{
    age = a;
    strcpy( name, p);
    sal = s;
}
void Emp::show()
{
    cout<<"Age is :"<<age<<","<<"name is :"<<name<<","<<"salary is "<<sal<<endl;
}
void Emp::get()
{
    cout<<"Enter age, name , sal:";
    cin>>age>>name>>sal;
}
int main()
{
    Emp E (18, "vishal", 20000.0);
    Emp F ( 20, " shrey", 50.0);
    F.get();
    E.show();
    F.show();
    return 0;
}
