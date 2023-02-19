//Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by D steps, where D is a positive integer. 
#include <bits/stdc++.h>
using namespace std;

void rotateArr(int *arr, int n, int d)
{
    int b = 0;
    int brr[n];
    int c = 0;
    int crr[n];

    for (int i = 0; i < d; i++)
    {
        brr[b] = arr[i];
        b++;
    }
    for (int i = d; i < n; i++)
    {
        crr[c] = arr[i];
        c++;
    }
    
    // cout << b << "\n" << c << "\n";

    // for (int i = 0; i < c; i++)
    // {
    //     cout << crr[i] << " ";
    // }

    // for (int i = 0; i < b; i++)
    // {
    //     cout << brr[i] << " ";
    // }

    // cout<<"\n\n";

     int counter = 0;
  for (int i = 0; i < c; i++)
    {
        arr[i] = crr[i];
        counter++;
    }
    int e=0;
    for (int i = counter; i < n; i++)
    {
        arr[i] = brr[e];
        e++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // int t;
    // cin >> t;

    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     
     rotateArr(&arr[0],n,d);

    return 0;
}