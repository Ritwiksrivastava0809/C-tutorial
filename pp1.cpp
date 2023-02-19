#include <iostream>

using namespace std;

void movezero(int *a, int n)
{

    int brr[n] = {};
    int crr[n] = {};
    int counter1 = 0;
    int counter2 = 0;
    int b = 0;
    int c = 0;

    //   int * brr = new int [counter2];
    //   int *crr = new int [counter1];

    for (int i = 0; i < n; i++)
    {
        if (*(a + i) == 0)
        {
            brr[b] = a[i];
            b++;
            counter2++;
        }
        // cout << "\n"
        //      << counter2;
        if (a[i] != 0)
        {
            crr[c] = a[i];
            c++;
            counter1++;
        }
        // cout << "\n"
        //      << counter1 << "\n";
    }
    int counter3 = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] = crr[i];
        counter3++;
    }

    for (int i = counter3; i < n; i++)
    {
        a[i] = brr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    // for (int i = 0; i < counter1; i++)
    // {
    //     cout << crr[i] << " ";
    // }
    // for (int i = 0; i < counter2; i++)
    // {
    //     cout << brr[i] << " ";
    // }
}

int main()
{
    int p;
    cin >> p;
    int arr[p];

    for (int i = 0; i < p; i++)
        cin >> arr[i];

    cout << "\n";
    // int n = sizeof(arr) / sizeof(arr[0]);

    movezero(&arr[0], p);

    return 0;
}