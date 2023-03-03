#include<iostream>
#include<string.h>
using namespace std;

class Emp
{
            int age;
            int salary;
            char name[20];
          static  int count;

    public:
            Emp(int,char*,int);
            void show();
            void show_salary();
            void show_count();
            

};
int Emp::count;
 Emp::Emp( int a, char*p, int s)
{
    age=a;
    strcpy(name,p);
    count++;
    salary = s;
}
void Emp::show()
{
     cout<<" The age is :"<<age<<","<<" salary is "<<salary<<" ,"<<" The name is :"<<name<<endl;
}
void Emp::show_count()
{
   cout<<" The total number of employee working in the company is :"<<count<<endl;  
}
void Emp::show_salary()
{
    cout<<" The avg salary of the employees is "<<salary/3.0;
}

  int main()
  {
     Emp E(15,"VISHAL",50000);
     Emp F( 20," shrey", 20000);
     Emp G( 25, "vivek",10000);
     E.show();
     F.show();
     G.show();
     F.show_salary();
     
     E.show_count();
     F.show_count();
     G.show_count();
     return 0;
  }