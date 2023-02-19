// // binary search of array 

// #include <iostream>

// using namespace std;

// int binarysearch(int arr[], int n, int key)
// {
//     int s=0;
//     int e=n;
//     while(s<=e)
//     {
//         int mid=(s+e)/2;
         
//          if(arr[mid] == key)
//          {
//              return mid;
//          }
//          else if(arr[mid]>key)
//          {
//              e = mid - 1;
//          }
//          else
//          {
//              s = mid + 1;
//          }
//     }
// }
// int main()
// {
//     int n;
//     cout<<"enter size of  array: ";
//     cin>>n;

//     int arr[n];

//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;

//     //  for(int i=0; i<n; i++)
//     // {
//     //     cin>>arr[i];
//     // }     
//     cout<<binarysearch(arr, n,key )<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int binarySearch(int arr[], int x, int low, int high )
{
    
    while(low<=high)
    {
        int mid=(low+high)/2;
        
        if(arr[mid] ==x)
        {
            return mid;
        }
        else if(arr[mid]>x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
}

}

int main() {
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int x;
    cout<<"Enter the element you want to find"<<endl;
    cin>>x;
    cout<< binarySearch(array, x ,0,6);

    return 0;
}