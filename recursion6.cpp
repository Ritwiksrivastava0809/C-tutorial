#include<bits/stdc++.h>

using namespace std;

void towerofhonoi(int n , char start, char end , char middle)
{
    if(n==0)
    {
        return;
    }
    towerofhonoi(n-1, start,middle,end);
    cout<<"move from "<<start<<" to "<<end<<"\n";
    towerofhonoi(n-1,middle,end,start);
}
int main()
{
    int n;  
    char start, end, middle;
    cout<<"enter the no. of blocks: ";
    cin>>n;
    cout<<"enter the source rod: ";
    cin>>start;
    cout<<"enter the destination rod: ";
    cin>>end;
    cout<<"enter the helper rod: ";
    cin>>middle;

    towerofhonoi(n,start,end,middle);

    return 0;
}