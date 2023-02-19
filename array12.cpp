#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "enter the rows of array: ";
    cin >> x;
    cout << "enter the common row and coloums of array: ";
    cin >> y;
    cout << "enter the coloums of second array: ";
    cin >> z;

    int m[x][y];
    cout << "enter the array 1: \n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> m[i][j];
        }
    }
    cout << "matrix is : \n";

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << m[i][j] << "  ";
        }
        cout << "\n";
    }

    int n[y][z];
    cout << "enter the array 2 : \n";
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < z; j++)
        {
            cin >> n[i][j];
        }
    }
    cout << "matrix is : \n";

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < z; j++)
        {
            cout << n[i][j] << "  ";
        }
        cout << "\n";
    }

    cout << "the multiplicated matrix m*n: \n";

    int ans[x][z];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < z; j++)
        {
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < z; j++)
        {
            for (int k = 0; k < y; k++)
            {
                ans[i][j] += m[i][k] * n[k][j];
            }
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < z; j++)
        {
            cout << ans[i][j] << "  ";
        }
        cout << "\n";
    }
    return 0;
}