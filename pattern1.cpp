#include <iostream>
using namespace std ;
 int main()
 {
      int n;
      cout<<"Enter the number of rows\n";
      cin>>n;

      for(int i=1 , k=0; i<=n; i++, k=0)
      {
      for(int s=1; s<=(n-i); s++)
      {
          cout<<" ";
      }    
          while( k!= (2*i)-1 )
          {
              cout<<"*";
              k++;

          }
       
      cout<<"\n";
      }
      

     return 0;

 }