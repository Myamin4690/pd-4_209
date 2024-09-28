#include<iostream>
using namespace std;
void cal(string name,int price,int discount,int f_price);
main()
{
 string name;
 int price;
 int f_price;
 int discount;
 cout<<"Enter the country name(pakistan,india,ireland,england,canada):"<<endl;
 cin>>name;
 cout<<"Enter the ticket price:$";
 cin>>price;
 cal (name,price,discount,f_price);
}
void cal(string name,int price,int discount,int f_price)
{
if(name=="pakistan")
   { 
   discount=5*price/100;
     f_price=price-discount;
     cout<<"Your final price is:$"<<f_price<<endl;
    }
if(name=="ireland")
    { 
     discount=10*price/100;
     f_price=price-discount;
     cout<<"Your final price is:$"<<f_price;
    } 
if(name=="india")
   { 
     discount=20*price/100;
     f_price=price-discount;
     cout<<"Your final price is:$"<<f_price;
    }
if(name=="pakistan")
     { 
     discount=5*price/100;
     f_price=price-discount;
     cout<<"Your final price is:$"<<f_price;
     }
if(name=="england")
      { 
       discount=30*price/100;
       f_price=price-discount;
       cout<<"Your final price is:$"<<f_price;
      }
if(name=="canada")
       { 
        discount=45*price/100;
        f_price=price-discount;
        cout<<"Your final price is:$"<<f_price;
       }
 
}
 
