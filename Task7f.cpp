#include<iostream>
using namespace std;
void flowerShop(int red_rose,int white_rose,int tulips_rose,float red_rosep,float white_rosep,float tulips_rosep,float or_price,float f_price,float discount);
main()
{
 float red_rosep;
 float white_rosep;
 float tulips_rosep;
 float or_price;
 float discount;
 float f_price; 
 int red_rose;
 int white_rose;
 int tulips_rose;
 cout<<"Enter the number of red roses:";
 cin>>red_rose;
  cout<<"Enter the number of white roses:";
 cin>>white_rose;
 cout<<"Enter the number of tulips:";
 cin>>tulips_rose;
 flowerShop(red_rose,white_rose,tulips_rose,red_rosep,white_rosep,tulips_rosep,or_price,f_price,discount);
}
  void flowerShop(int red_rose,int white_rose,int tulips_rose,float red_rosep,float white_rosep,float tulips_rosep,float or_price,float f_price,float discount)
{ 
 red_rosep=red_rose*2.00;
 white_rosep=white_rose*4.10;
 tulips_rosep=tulips_rose*2.50;
 or_price=red_rosep+white_rosep+tulips_rosep;
 cout<<"your orignal price is:"<<or_price<<endl;
 cout<<"NO discount applied. ";

   if(or_price>=200)
  {
    discount=20*or_price/100;
    f_price=or_price-(discount);
    cout<<"price after Discount:"<<f_price;
      } 
 }
  


 





 
