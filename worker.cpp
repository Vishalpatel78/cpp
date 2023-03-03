   /*Wap to create a class called Worder having 3 data member 

a. hours_worked: to store numbers of hours the worder has worked .
b. rate_per_hour: to store per hour charge of the worker .
c. salary:     to store total salary of the worker.
  
       also provide 3 member function in the class :

a. get_data: to accept hours_worked and rate_per_hour from the user,
b. calculate_sal(): to calc salary of the worker as per logic given below,

1. till 40 hours , sal will be hours_worked * rate_per_hour,
2. For all the hours above 40 rate be doubled,
3: for displaying all the details*/

#include<iostream>
using namespace std;

class Worker
{
            int rph;
            int sal;
            int totalsal=0;
            float hw;
 public:
            void get_data();
            void cal_sal();
};

void Worker::get_data()
{
            cout<<"the hours worked and rate per hour are:";
            cin>>hw>>rph;

}

void Worker::cal_sal()
{

           cout<<" The hours worked by the workers is :"<<hw<<endl;
           cout<<" The rate per hour is :"<<rph<<endl;

           if(hw<40)
           {
              sal= hw*rph;
           }
        else{
              int base_sal;
              int over_sal;
              base_sal = 40*rph;
              over_sal = rph*rph;
              sal = base_sal + over_sal;

        }

           cout<<"The total salary is :"<<sal<<endl;

        
}

 int main()
 {
    Worker obj;
    obj.get_data();
    obj.cal_sal();
    return 0; 
 }