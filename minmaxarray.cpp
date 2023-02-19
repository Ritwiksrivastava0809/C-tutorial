#include <bits/stdc++.h>

using namespace std;

void minmax(int *arr, int ub, int lb)
{
    int min = lb;

    for (int i = 0; i <= ub; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    cout << "\n\n";

    cout << min;

    cout << "\n\n";

    int max = lb;

    for (int i = 0; i <= ub; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << max;
}

int main()
{
    int n;

    cout << "enter the size of the array: ";

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int lb, ub;

    ub = arr[n - 1];
    lb = arr[0];

    minmax(&arr[0], ub, lb);

    return 0;
}