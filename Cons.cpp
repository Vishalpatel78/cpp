#include<iostream>
using namespace std;

class Box
{
        int len;
        int breadth;
        int height;
 public:
         Box();
         Box( int );
         Box( int, int , int);
         void show();      

};
Box::Box()
{
    cout<<" Enter length , breadth, height:";
    cin>>len>>breadth>>height;
}
Box::Box(int i)
{
    len = breadth = height = i;
}
Box::Box( int a, int b, int c)
{
    len = a;
    breadth = b;
    height = c;
}
void Box:: show()
{
    cout<<"The value of length is:"<<len<<" THe value of breadth is :"<<breadth<<" The value of height is :"<<height<<endl;
}
int main()
{
    Box B1;
   // Box B4;
    //B4 = B1; for copy b1 in b4//
    Box B2( 2);
    Box B3( 10, 11, 12);
    B1.show();
    //B4.show();//
    B2.show();
    B3.show();
    return 0;
}
