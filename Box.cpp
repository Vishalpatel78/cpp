/* Wap to create a class Box having 3 integer data member called length ,
breadth , height .
provide 3 constructor in the class
1. Non parametrized constructor for accepting input of l, b , h from the user
2. Single parametrized constructor to initilized of l, b , h from the user
3. Triple parametrized constructor to initialize l,b,h with diff values
 Also design a member function called show() to display the value of l,b,h
 finally create 3 object of Box class such that every object a different constructor */
#include<iostream>
using namespace std;
class Box
{
        int l;
        int b;
        int h;
 public:
        Box();
        Box(int);
        Box(int , int, int);
        void show();
};
Box:: Box()
{
    cout<<"Enter length,breadth,height";
    cin>>l>>b>>h;
}
Box::Box(int p)
{
  l=b=h=p;
}
Box::Box( int x, int y,int z)
{
    l=x;
    b=y;
    h=z;
}
void Box::show()
{
    cout<<"length is:"<<l<<"breadth is :"<<b<<"height is :"<<h<<endl;
}
int main()
{
    Box B1;
    Box B2(10);
    Box B3(10,20,30);
    B1.show();
    B2.show();
    B3.show();
    return 0;
}

