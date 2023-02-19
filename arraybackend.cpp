#include<bits/stdc++.h>

using namespace std;
// void fun(int *a)
// {
//     int n=sizeof(*a)/sizeof(a[0]);
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+ *(a+i);
//     }
//     cout<<sum;
// }
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     fun(&arr[0]);
// }

void fun(int a[],int p) //(int *a,int p)
{
    // cout<<sizeof(*a);
    // cout<<"\n";
    int sum=0;
    for(int i=0;i<p;i++)            // sum =0 i =0 *a=1 i
    {
        sum=sum + a[i] ;// *(a+i);
        //cout<<sum<<"+"<<" ";
    }
    cout<<sum;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<n<<"\n";
    fun(arr,n);//(&arr[0],n)
}