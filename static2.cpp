#include<iostream>
#include<string.h>
using namespace std ;
class Emp
{
    int age ;
    char name[20];
   static int count;
public:
    Emp(int,char*);
    void show();
    void showcount();
};
int Emp::count;
Emp::Emp(int a, char*p)
{
    age = a;
    strcpy(name,p);
    ++count;
}
void Emp::show()
{
    cout<<"age is :"<<age<<endl<<"name is :"<<name<<endl;
}
void Emp::showcount()
{
    cout<<"total emp working is :"<<count<<endl;
}
int main()
{
    Emp E(18, "vishal");
    Emp F(18, "shrey");
    Emp G(20, "vivek");
    E.show();
    F.show();
    G.show();
    E.showcount();
    F.showcount();
    G.showcount();
}
