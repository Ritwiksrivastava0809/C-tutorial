#include <bits/stdc++.h>

using namespace std;

// int rotatearr(int *arr, int n)
// {
//     int brr[n];
//     int b = 0;
//     int crr[n];
//     int c = 0;
//     int d = n - 1;
//     for (int i = 0; i < d; i++)
//     {
//         brr[b] = arr[i];
//         b++;
//     }
//     for (int i = d; i < n; i++)
//     {
//         crr[c] = arr[i];
//         c++;
//     }
//     int counter = 0;
//     for (int i = 0; i < c; i++)
//     {
//         arr[i] = crr[i];
//         counter++;
//     }
//     cout<<counter<<"\n";
//     int e = 0;
//     for (int i = counter; i <=b; i++)
//     {
//         arr[i] = brr[e];
//         e++;
//     }
//     return *arr;
// }

// void findmaxsum(int *a, int n)
// {
//     int brr[n];
//     int b = 0;
//      int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + (i* a[i]);
//        // cout<<sum<<" ";
//         brr[b] = sum;
//         b++;
//         rotatearr(&a[0], n);
//         // for(int i =0; i<n; i++)
//         // {
//         //     cout<<a[i]<<" ";
//         // }
//     }
//     cout<<*max_element(brr,brr+n);
// }


int main()
{
    int n = 0;
    int arr[4] = {1,20,2,10};
    n = sizeof(arr)/sizeof(arr[0]); 
    return 0;
    
}