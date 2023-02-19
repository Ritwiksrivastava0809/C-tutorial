#include <iostream>

using namespace std;
bool prime(int n)
{
     if(n<=2)
     {
         return true;
     }    
     for(int i=2; i<=n; i++)
     {
         if (n%i==0)
         {
            return false;
         }
         return true;
     }
}
int main ()
{
      int no;
      cout<<"enter no. to be checked: ";
      cin>>no;
      if(prime(no))
      {
          cout<<no<<" is a prime no."<<endl;
      }
      else 
      {
          cout<<no<<" is not a prime no."<<endl;
      }
    return 0;
}