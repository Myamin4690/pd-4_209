#include<iostream>
using namespace std;
 void checkSpeed(int speed);
main()
{
 int speed;
 cout<<"speed:";
 cin>>speed;
checkSpeed(speed);
}
 void checkSpeed(int speed)
{
 if (speed>=100)
 {cout<<"YOU WILL BE CHALLENGEDd!!!"<<endl;}
  if (speed<=100)
 {cout<<"PERFECT!YOU'RE GOING GOOD."<<endl;}
}
 
