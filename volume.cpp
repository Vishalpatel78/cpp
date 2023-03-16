#include<iostream>
using namespace std;
void volume(int);
void volume(int , int, int);
int main()
{
    int choice;
    int s;
    int l,b,h;
    cout<<"Select a figure:";
    cout<<endl<<" 1. Cube"<<endl<<"2.Cubid"<<endl;
    cout<<"Enter choice:";
    cin>>choice;
    switch (choice)
    {
    case 1:
           cout<<"Enter side of the cube :";
           cin>>s;
           volume(s);
           break;
    case 2:
          cout<<"Enter l,b,h of cubid:";
          cin>>l>>b>>h;
          volume(l,b,h);
          break ;
  default :
          cout<<"Wrong input";
    }
    return 0;
}
void volume(int s)
{
    cout<<"Volume of cube is :"<<s*s*s<<endl;
}
void volume( int l, int b, int h)
{
    cout<<"volume of cubiod is :"<<l*b*h<<endl;
}
