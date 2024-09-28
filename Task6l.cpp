#include<iostream>
using namespace std;
 void longest (int h,int m,int t1,int t2);
main()
{ 
   int h;
   int m;
   int t1;
   int t2;
   cout<<"Enter the number of hours:";
   cin>>h;
   cout<<"Enter the number of minutes:";
   cin>>m;
   longest (h,m,t1,t2);
}
  void longest (int h,int m,int t1,int t2)
{
    t1=h*60;
    t2=m*1;
    if (t1>t2)
 {cout<<h<<endl;
 }
  else

 cout<<m<<endl; 
 }


 





 
