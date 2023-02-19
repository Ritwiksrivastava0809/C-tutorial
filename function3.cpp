#include <iostream>
#include<math.h>
using namespace std;

bool prime(int n)
{
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
     int a,b;
     cout<<"enter the first no. : ";
     cin>>a;
     cout<<"enter the second no. : ";
     cin>>b;
     for( int i= a; i<=b; i++)
     {
         if(prime(i))
         {
          cout<<i<<"  ";
         }
     }

      return 0;

}