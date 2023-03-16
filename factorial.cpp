#include<iostream>
using namespace std;

class Factorial
{
    int n;
    int f;

  public:
         void inti();
         void get();
         void cal();
         void show();
};

void Factorial::inti()
{
    f = 1;
}
void Factorial::get()
{
    cout<<" Enter an integer:";
    cin>> n;
}
void Factorial::cal()
{
    for ( int i=1 ; i<=n; i++)
    {
        f = f*i;
    }
}
void Factorial::show()
{

    cout<<" Num is :"<<n<<endl;
    cout<<" factorial is :"<<f<<endl;
}

 int main()
 {
     Factorial F;
     F.inti();
     F.get();
     F.cal();
     F.show();
     return 0;

 }
