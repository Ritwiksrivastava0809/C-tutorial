// prime number b/w two number and there sum

#include <iostream>

using namespace std;

int main()
{  
    int a,b,i,sum=0;
    cin>>a>>b;
    for(int num=a;num<b;num++)
     {
        for(i=2;i<num;i++)
         {
             if(num%i==0)
             {
                  break;
             }
    }
    if(i==num)
    {
        cout<<num<<" ";
        sum=(sum)+(num);
    }
    
    }
    cout<<"the sum is "<<sum<<endl;
    return 0;
}
