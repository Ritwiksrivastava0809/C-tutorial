#include <bits/stdc++.h>

using namespace std;



bool pairofsum(int *a, int sum)
{
    int i;
    for (i = 0; i < 6; i++)
    {
        if (a[i] > a[i + 1])
        {
            break;
        }
    }
    int ptr2 = (i + 1);
    int ptr3 = i;

    while (ptr2 != ptr3)
    {
        if (a[ptr2] + a[ptr3] == sum)
        {
            return true;
        }

        if (a[ptr2] + a[ptr3] < sum)
        {
            ptr2 = (ptr2 + 1);
        }

        else
        {
            ptr3 = (6 + ptr3 -1);
        }
    }
    return false;
}

int main()
{

    int arr[]={13,15,4,8,10,11};
    int sum=16;
    if (pairofsum(&arr[0], sum))
    {
        cout << "true";
    }
    else
    {
        cout << "no such pair exits";
    }
    return 0;
}