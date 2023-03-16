#include<iostream>
#include<string.h>
using namespace std;

class Emp
{
    int age;
    char name[20];
    float sal;
 public:
       void get( int , char*, float);
       void show();
};

void Emp::get( int a, char* p , float s)
{
    age = a;
    strcpy( name, p);
    sal = s;
}
void Emp::show()
{
    cout<<"Age is :"<<age<<","<<"name is :"<<name<<","<<"salary is "<<sal<<endl;
}

int main()
{
    Emp E;
    E.get( 18, "vishal", 20000.0);
    E.show();
    return 0;
}
