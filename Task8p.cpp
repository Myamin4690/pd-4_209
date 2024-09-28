#include<iostream>
using namespace std;
void pet(int holidays,int w_days,int time,int difference);
main()
{
 int holidays;
 int w_days;
 int time;
 int difference;
 cout<<"Enter the holidays:";
 cin>>holidays;
 pet(holidays,w_days,time,difference);
 }
void pet(int holidays,int w_days,int time,int difference)
{ 
 w_days=365-holidays;
 time=(w_days*63)+(holidays*127);
 difference=30000-time/60;

 if(difference>=100)
 { cout<<"Tom sleep well"<<endl;
     cout<<difference; }

 else
 { cout<<"Tom  will run away."<<endl;
   cout<<difference; }
   }
 
 
  


 





 
