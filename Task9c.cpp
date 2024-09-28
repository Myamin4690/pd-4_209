#include<iostream>
using namespace std;
void check(int people,int t_tp,int tp,int days,int use_per_day);
main()
{
 int people;
 int tp;
 int t_tp;
 int days;
 int use_per_day;
 cout<<"Number of people in the household:";
 cin>>people;
 cout<<"Number of rolls of Tp:";
 cin>>tp;
 check( people,tp,t_tp,use_per_day,days);
 }
 void check(int people,int tp,int t_tp,int use_per_day,int days)
 {
  use_per_day=people*57;
  t_tp=tp*500;
  days=t_tp/use_per_day;
  cout<<"days:"<<days<<endl;
{
if (days>=14)
 {cout<<"your tp will last  "<<days<<" days, not need to panic";} 
else
   {cout<<"your tp will last only "<<days<<"days ,buy more!";}
}
}
 


 





 
