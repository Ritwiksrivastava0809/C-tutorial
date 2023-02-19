#include<iostream>
#include<math.h>
using namespace std ;

int amstrong(int n){
    int sum =0;
    while(n>0)
    {
        int lastdigit = n%10;
        sum = sum + pow(lastdigit,3) ;
        n=n/10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"enter the desired number: ";
    cin>>n;
    int orignal =n;
    
    cout<<amstrong(n)<<endl;
    
    if(amstrong(n)==orignal)
    {
        cout<<"the given number is amstrong no. ";
    }
    else 
    {
        cout<<"the give no. is not amstrong no. ";
    }
    return 0;
}