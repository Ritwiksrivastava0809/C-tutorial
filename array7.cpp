#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int mx = -1999999;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(arr[i+1]>arr[i])
        {
            mx = arr[i+1];
        }
        else
        {
            mx = arr[i] ;
        }
      
      cout<<mx<<" ";

    }   
    return 0;
}