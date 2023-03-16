#include<iostream>
using namespace std;
class Check
{
    int a;
  public:
    void get()
    {
        cout<<"enter any num:";
        cin>>a;
    }
    void show()
    {
         cout<<"the entered num is :"<<a;
    }
};
int main()
{

    Check c;
    c.get();
    c.show();
    return 0;
}
