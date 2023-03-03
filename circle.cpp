#include<iostream>
using namespace std;

class Circle
{
             int r;
             float area;

   public:
             void get_data();
             void show_data();
             void cal();   
             
};

void Circle::get_data()
{
    cout<<" Enter the radious of the circle:";
    cin>> r;
};

void Circle::cal()
{
    area=3.14*r*r;
};

void Circle::show_data()
{    
    cout<<" The radious of the circle is :"<<r<<endl;
    cout<<" The area of the circle is :"<<area;
};

  int main()
  {
    Circle obj;
    obj.get_data();
    obj.cal();
    obj.show_data();
    return 0;
  }
