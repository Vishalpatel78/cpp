#include<iostream>
using namespace std;

class Add
{
              int a, b,sum=0;

    public:  

            void get();
            void add();
            void show();
};

 void Add:: get()
 {
    cout<<"Enter two numbers:";
    cin>>a>>b;
 };

 void Add::add()
 {
    sum = a+b;
 };
 void Add:: show()
 {
    cout<<"the sum of these two numbers is :"<<sum<<endl;

 };

 int main()
 {
    Add obj;
    obj.get();
    obj.add();
    obj.show();
    return 0;
 }