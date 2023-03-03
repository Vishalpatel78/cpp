
/*wap to create a class called Date having 3 data members for storing day , month , and year of type int .
Now declare 2 member function in the class called setdate() and showdate(),
the member function setdate() muust be parametrized and should initilize  data member of the class with the arguments passed 
THe member function showdata() should display date values ,
Finally in the functoion main() , create 2 objects of the data called d1 and d2 
Intialize the object d1 with todays date and the object d2 with your birthday , and then display both the dates__ */

#include<iostream>
using namespace std;

class Date
{
            int dd;
            int mm;
            int yy;
    
    public:
            void set_data( int,int,int);
            void show_data();
        
};
void Date::set_data(int a, int b, int c)
{
    dd = a;
    mm = b;
    yy = c;
}
void Date::show_data()
{
    cout<<"The day is :"<<dd<<endl<<"The month is"<<mm<<endl<<"The year is:"<<yy<<endl;
}
int main()
{
    Date d1,d2;
    d1.set_data(23, 2, 2023);
    d2.set_data( 07,07,2004);
    d1.show_data();
    d2.show_data();
    return 0;
}