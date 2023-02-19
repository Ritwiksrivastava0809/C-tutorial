#include<bits/stdc++.h>

using namespace std;

int main()
{

map<string , int > freq;

string s;
int n;
cin>>n;

for(int i=0; i<n; i++)
{
    cin>>s;
    if(freq[s]==0)
    {
        cout<<"ok"<<"\n";

    }
    else
    {
        cout<<s<<freq[s]<<"\n";
    }
    freq[s]++;
    
}
    
}