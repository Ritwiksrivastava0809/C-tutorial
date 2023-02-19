//first occurence and last occurence 

#include <iostream>

using namespace std;

int firstocuurance(int arr[] , int n , int i , int key )
{
    if(i==n)
    {
        return -1;
    }

   if(arr[i]==key)
   {
       return i;
   }
  return firstocuurance(arr,n,i+1,key);
}

int lastoccurence(int arr[], int n, int i, int key)
{
       if(i==n)
    {
        return -1;
    }

   int restarray =  lastoccurence (arr, n, i+1,key ) ;
   
   if(restarray != -1)
   {
       return restarray;
   }
    
    if(arr[i]==key)
     {
         return i;
     }
    return -1;

}

int main()
{
    int arr[]={8,3,4,7,2,5,8,0,4,5,3,7,9,1,2,5,9};

    int n;
    cout<<"enter the number whose occurence should be checked: ";
    cin>>n;


    cout<<firstocuurance(arr,17,0,n)<<" "<<lastoccurence(arr,17,0,n)<<endl;

    return 0;
}