#include<iostream>
using namespace std;

int fact(int n)
{
    int  factorial =1;
       for(int i=1; i<=n; i++)
     {
      factorial*=i;
     }
     return factorial;
}

int main()
{  
    int n;
    cout<<" enter the number of rows : ";
    cin>>n;

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            int a = fact(i)/(fact(j)*fact(i-j));
            cout<<a<<" ";
        }
        cout<<endl;
    }

    return 0;
    
}