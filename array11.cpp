#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "enter the rows of array: ";
    cin >> n;
    cout << "enter the coloums of array: ";
    cin >> m;

    int arr[n][m];

    cout << "enter the array: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "matrix is : \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << "\n";
    }

    cout << "the transpose matrix is : \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[j][i] << "  ";
        }
        cout << "\n";
    }
    return 0;
}