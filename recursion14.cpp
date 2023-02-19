#include <iostream>

using namespace std;

int knapsack(int value[], int wt[], int n, int W)
{
    if(n==0)
    {
        return 0;
    }

    if(wt[n-1]>W)
    {
       knapsack(value, wt ,n-1,W);
    }
    return max(knapsack(value , wt, n-1,W-wt[n-1])+value[n-1] , knapsack(value, wt ,n-1,W));
}

int main()
{
    int n;
    cout<<"enter the no. of items: \n";
    cin>>n;

    int value[n];
    cout<<"enter the values of items: \n";
    for(int i=0; i<n; i++)
    {
        cin>>value[i];
    }

     int wt[n];
    cout<<"enter the weigth of items: \n";
    for(int i=0; i<n; i++)
    {
        cin>>wt[i];

    }
    int W;
    cout<<"enter the weigth of knapsack: \n";
    cin>>W;

    cout<<"the max amount he can steal is: "<<knapsack(value,wt,n,W);

    return 0;


}