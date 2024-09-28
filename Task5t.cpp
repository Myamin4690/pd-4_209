#include<iostream>
using namespace std;
 void  bounus(int n1,int n2);
main()
{
 int n1;
 int n2;
 cout<<"Enter your position:";
 cin>>n1;
 cout<<"Enter your friend position:";
 cin>>n2;
 bounus(n1, n2);
}
  void  bounus(int n1,int n2)
{
 if (n2-n1<=6)
{
 cout<<"true"<<endl;
}
else
 cout<<"false"<<endl;
}

 
