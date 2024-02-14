#include<iostream>
#include<string>
using namespace std;
class bankemployee
{
        private:
                string name;
                long accountno;
                float balance;

        public:
                bankemployee(string n,long accno,float bal)
                {
                        name=n;
                        accountno=accno;
                        balance=bal;
                }
                void displayDetails()
                {
                        cout<<"employee name:"<<name;
                        cout<<"account number:"<<accountno;
                        if(balance<500)
                        {
                                cout<<"invalidbalance:"<<balance<<"(balance < 500)";
                        }
                        else
                        {
                                cout<<"balance:"<<balance;
                        }
                }
                 void deposit(float amount)
                 {
                         balance+=amount;

