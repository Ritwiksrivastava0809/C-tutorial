#include<bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);

list<int>::iterator  it = l1.begin();
advance(it,1);
l1.insert(it,35);
it = l1.begin();

while(it!=l1.end()){
    cout<<*it<<endl;
    it++;
}
  
}