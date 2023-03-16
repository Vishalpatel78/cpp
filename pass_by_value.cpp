#include<iostream>
using namespace std;
void increment( int );
int main()
{
    int a = 10;
    cout<<"Before calling the increment a = "<<a<<endl;
    increment(a);
    cout<<"After clling the increment a = "<<a<<endl;
    return 0 ;

}
void increment( int p)
{
    p++;
}
