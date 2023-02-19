// reverse a stirng 
#include<iostream>

using namespace std;


 
void reverse(string s)
{
    if(s.length()==0)
    {
        return;
    }

    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];

}

int main()
{
    
    string s;
    
    cout<<"enter the string to be reversed\n";

    getline(cin ,s);
    
    reverse(s);
    
    return 0;

}