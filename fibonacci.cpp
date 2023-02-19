#include<iostream>
 
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of fiboancci term: ";
    cin>>n;

    int a=0,b=1,c;
    cout<<a<<" "<<b<<" ";
    for(int i=2; i<n; i++)
    {
        c = a + b;
        cout<<c<<" ";
        a=b;
        b=c;
    }  
    
    return 0;
}