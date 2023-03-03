#include<iostream>
#include<string.h>
using namespace std;

class Emp
{
            int age;
            char name[20];
          static  int count;

    public:
            Emp(int,char*);
            void show();
            void show_count();
            

};
int Emp::count;
 Emp::Emp( int a, char*p)
{
    age=a;
    strcpy(name,p);
    count++;
}
void Emp::show()
{
     cout<<" The age is :"<<age<<","<<" The name is :"<<name<<endl;
}
void Emp::show_count()
{
   cout<<" The total number of employee working in the company is :"<<count<<endl;  
}

  int main()
  {
     Emp E(15,"VISHAL");
     Emp F( 20," shrey");
     Emp G( 25, "vivek");
     E.show();
     F.show();
     G.show();
     
     E.show_count();
     F.show_count();
     G.show_count();
     return 0;
  }