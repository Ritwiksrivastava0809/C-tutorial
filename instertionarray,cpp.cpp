// insertion of element in array;

#include <bits/stdc++.h>

using namespace std;

void insert(char *arr, int key, char element, int ub, int lb, int n)
{
    for (int k = ub; k >= key; k--)
    {
        arr[k + 1] = arr[k];
    }
    arr[key] = element;
    ub++;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    char arr[n] = {'a', 'b', 'c', 'd', 'e', 'f'};
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    int ub;
    int lb;
    ub = 6;
    lb = 0;
    char element;
    cout << "enter the element to be inserted: ";
    cin >> element;
    int key;
    cout << "enter the position at which it has to be entered: ";
    cin >> key;

    insert(&arr[0], key, element, ub, lb, n);
    return 0;
}