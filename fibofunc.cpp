#include<iostream>

using namespace std; 
int fibonacci(int n)
{  
     int a=0,b=1,c,sum;
    
     for(int i=2; i<n; i++)
     {
         sum=a+b; 
         a=b;
         b=sum;
     }
    return b;
}
int main()
{
    int n,c,i=0;
    cout<<"enter the fibonacci term: ";
    cin>>n;
    cout<<0<<" "<<1<<" ";
    while(i<n)
    {
   cout<<" "<<fibonacci(i);
    i++;
    }
    return 0;
}