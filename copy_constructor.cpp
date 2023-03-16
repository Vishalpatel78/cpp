 #include<iostream>
 using namespace std;
 class Box
 {
     int l,b,h;
 public:
     Box();
     Box( int);
     Box( int , int, int);
     Box( Box &);
     void show();
 };
Box::Box()
{
    cout<<"Enter the value of l,b,h";
    cin>>l>>b>>h;
}
Box::Box( int x)
{
    l=b=h=x;
}
Box::Box( int i, int j, int k)
{
    l = i;
    b = j;
    k = k;
}
Box::Box( Box &p)
{
    l = p.l;
    b = p.b;
    h = p.h;
}
void Box::show()
{
    cout<<l<<","<<b<<","<<h<<endl;
}
int main()
{
    Box B1;
    Box B2(5);
    Box B3(6,7,8);
    Box B4(B1);
    B1.show();
    B2.show();
    B3.show();
    B4.show();
    return 0;
}
