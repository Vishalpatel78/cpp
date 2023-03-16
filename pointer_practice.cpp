#include<iostream>
using namespace std;
int main()
{
   /* int a = 10;
    int *p;
    p = &a;
    cout<< p;*/
    int a = 15;
    int &p = a;
    cout<<"value of a ="<<a<<",value of p = " <<p<<endl;
    return 0;
}
