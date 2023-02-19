//deletion of element in an array

#include <bits/stdc++.h>

using namespace std;

void del(char *arr, int key,  int ub, int lb, int n)
{
    if (ub > n)
    {
        cout << "overflow";
        return;
    }
    else
    {
        for (int k = key; k <=ub; k++)
        {
            arr[k - 1] = arr[k];
        }
        
        ub--;
        n--;
     
        for (int i = 0; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int n;
    
    cout << "enter the size of array: ";
    
    cin >> n;
    
    char arr[n] = {'a', 'b', 'c', 'd', 'e', 'f'};
    
    // sort(arr[0],arr[n]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << "\n";
    
    int ub;
    
    int lb;
    
    ub = 5;
    
    lb = 0;
    
    int key;
    
    cout << "enter the position at which it has to be deleted: ";
    
    cin >> key;

    del(&arr[0], key, ub, lb, n);
    
    return 0;

}