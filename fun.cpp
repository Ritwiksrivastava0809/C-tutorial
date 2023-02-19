#include<bits/stdc++.h>

using namespace std;

int main()
{

    // int arr[9] = {1,1,1,1,0,0,0,0,0};
    // int counter =0;
    // for(int i=0; i<9; i++)
    // {
    //     if(arr[i]==0)
    //     {
    //         counter++;
    //     }
    // }
    // cout<<counter;

    int n;
    int a[n];
    cout<<"Enter the size of array ";
    cin>>n;
    cout<<"Enter the values ";
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    int max=a[0];
    for(int i=0;i<n;i++) 
    {
     if(a[i]> max) 
    {
     max=a[i];
    }
    }
    cout<<"THE MAXIMUM VALUE IS "<<max;
    return 0;

}