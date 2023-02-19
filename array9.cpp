//2 - d array

#include <iostream>

using namespace std;

int main()
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
            cin>>arr[i][j];
        }
    }   
    cout<<"matrix is : \n";

   for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<"\n";
    } 

     int x,y;
     cout<<"enter the row and coloum element  to be found: ";
     cin>>x>>y;
    cout<<"\n";
     
     bool flag = false;
     for(int i=0; i<n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             if(arr[i][j]==arr[x][y])
             {
                 cout<<arr[x][y];
                flag=true;
             }
         }
     }
     if(flag)
     {
         cout<<" is the element found \n ";
     }
     else 
     {
         cout<<"element does not exist ";
     }
     
    return 0;

}