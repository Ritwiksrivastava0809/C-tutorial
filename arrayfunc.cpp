#include<iostream>
#include<climits>
using namespace std;

int  max_min(int arr[], int n)
{
       
         int min_no=INT_MAX;
         int max_no=INT_MIN;
        
           for(int i=0;i<n;i++)
    {
        if(arr[i]<min_no)
        {
            min_no=arr[i];
            
        }
        if(arr[i]>max_no)
        {
            max_no=arr[i];
            
        }
    }
    
        int brr[] ={max_no,min_no};
        return brr;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<max_min(arr,n)<<endl;
    return 0;
}