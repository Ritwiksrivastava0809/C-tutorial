#include <iostream>
#include <math.h>

using namespace std;

int main()
{
     int n;
     cout<<"enter the number: ";
     cin>>n;

     int sum=0;
     int orignaln=n;

     while(n>0)
     {
         int lastdigit = n%10;
         sum = sum + pow(lastdigit,3) ;
         n=n/10;
     }
     cout<<sum<<"\n";
     
     if(sum==orignaln)
     {
         cout<<"given no. is amstrong";

     }
     else 
     {
         cout<<"given no. is not amstrong";
     }
    return 0;
}