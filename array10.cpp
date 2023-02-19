// spiral array

#include<iostream>

using namespace std;

signed main()
{
    int n,m;
    cout<<"enter the rows of array: ";
    cin>>n;
    cout<<"enter the coloums of array: ";
    cin>>m;

    int arr[n][m]; 

    cout<<"enter the array: \n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i] [j];
        }
    }  

    int row_start = 0, row_end = n - 1, coloum_start = 0,coloum_end = m - 1;

    while(row_start<= row_end && coloum_start <= coloum_end)
    {
        // row start
        for(int col = coloum_start; col <= coloum_end; col++)
        { 
            cout<<arr[row_start] [col]<<" ";
        }
        row_start++;

        // for coloum end
        for(int row= row_start; row <= row_end; row++)
        {
            cout<<arr[row] [coloum_end]<<" ";
        }
        coloum_end--;

        //for row end
        for(int col = coloum_end; col >= coloum_start; col-- )
        {
            cout<<arr[row_end] [col]<<" ";
        }
        row_end--;

        //for coloum start
        for(int row = row_end; row >= row_start; row--)
        {
            cout<<arr[row] [coloum_start]<<" ";
        }
        coloum_start ++;
    } 
    return 0;
}