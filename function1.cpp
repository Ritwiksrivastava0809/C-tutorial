#include <iostream>

using namespace std;

int facttorial(int n)
{
      int ans=1;
      for(int i=n; i>0; i--)
      
          ans *= i;
          return ans;
      
}
int main()
{
    int no;
    cout<<"enter the number: ";
    cin>>no;

    cout<<no<<"! = "<<facttorial(no)<<endl;

    return 0; 

}
