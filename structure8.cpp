#include<bits/stdc++.h>

using namespace std;

class A
{ 

    int a , b ;

    public :
 friend void fun(A&);
 friend void run(A );
};
void fun(A &o1)
{
    cin>>o1.a>>o1.b;
}
void run(A o1 )
{
    cout<<o1.a<<o1.b;
}
int main()
{
    A c1;
    fun(c1);
    run(c1);
}