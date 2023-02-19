// bubble sort

#include<iostream>

using namespace std;

int main()
    { 
    int n;
    cin>>n;
   
     int arr[n];
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
     
     int i=1;
     while (i<n-1)
     {
         for(int j=0; j<n-i; j++)
         {
             if(arr[j]>arr[j+1])
             {
                  int temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
             }
         }
         i++;
     }
     for(int i=n-1; i>=0; i--)
         {
        cout<<arr[i]<<" ";
         }
        cout<<endl;
  
       return 0;
    }
