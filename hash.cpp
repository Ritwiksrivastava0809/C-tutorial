#include<bits/stdc++.h>

using namespace std ;

int main(){
    vector<int> arr = {1,3,2,1,3,2,4,1,2};
    vector<int> hash(12 , 0);
    for(auto it : arr){
        hash[it] ++ ;
    }
    for(auto iter : hash){
        cout<<iter<<" ";
    }

    string s ="abcdabefc" ;
    vector<int> hashstring(26 , 0);
    int c;
    for (auto it : s){
        c = it - 'a';
        hashstring[c] ++;
    }
    cout<<endl;
    for(auto iter : hashstring){
        cout<<iter<<" ";
    }
    return 0;
}