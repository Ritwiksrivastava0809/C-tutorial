#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    std::vector<int>v ;
    for(int i=0; i<2*n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int p=0;
    int counter=1;
    std::set<int>s ; 
    if(v[0]==v[1])
    {
        cout<<"1"<<"\n";
    }
    else
    {
     s.insert(v[0]);
    
     for(int i=1;i<2*n;i++)
     {
        if(s.count(v[i]) )
        {
            s.erase(v[i]);
             
            counter--;

        }
        else
        {
            s.insert(v[i]);
            counter++;
          p=max(p,counter);
        }
     }
    
    cout<<p<<"\n";
    }
    return 0;
    
}