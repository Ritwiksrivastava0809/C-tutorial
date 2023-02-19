#include <bits/stdc++.h>

using namespace std;

void setarray(int arr[], int n)
{
    int brr[n];
    int e = n - 3;
    int f = 0;
    int c = 1;
    int count = 0;

    if (n % 2 == 0)
    {
        brr[n - 1] = arr[n - 1];
        brr[n - 2] = arr[0];
        for (int i = n - 2; (i >= 1) && (e > 0); i--)
        {
            brr[e] = arr[i];
            e = e - 2;
            count++;
        }
        for (int i = count; i >= 1; i--)
        {
            brr[f] = arr[i];
            f = f + 2;
        }
        cout << "\n";

        for (int i = 0; i < n; i++)
        {
            cout << brr[i] << " ";
        }
    }
    else
    {
        brr[n - 1] = arr[0];
        brr[n - 2] = arr[n - 1];
        int i;
        for (i = 1; i < n - 1 && e >= 0; i++)
        {
            brr[e] = arr[i];
            e = e - 2;
        }
        for (int j = i; j < n - 1; j++)
        {
            brr[c] = arr[j];
            c = c + 2;
        }
        for (int i = 0; i < n; i++)
        {
            cout << brr[i] << " ";
        }
    }
}

int main()
{
    int n;

    cout << "Enter the size of array: ";

    cin >> n;

    int arr[n];

    cout << "\nEnter the array: ";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    setarray(arr, n);
    return 0;
}