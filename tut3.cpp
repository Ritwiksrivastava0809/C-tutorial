#include<iostream>

using namespace std;

int main()
{
    int marks;
    cin>>marks;

    if(marks<25)
    {
        cout<<"FAIL\n";
    }
    else if(marks>=25 && marks<45)
    {
        cout<<"E\n";
    }
    else if(marks>=45 && marks<50)
    {
        cout<<"D\n";
    }
    else if(marks>=50 && marks<60)
    {
        cout<<"C\n";
    }
    else if(marks>=60 && marks<80)
    {
        cout<<"B\n";
    }
    else if(marks>=80 && marks<100)
    {
        cout<<"A\n";
    }
    else
    {
        cout<<"invalid entry\n";
    }
    return 0;

}