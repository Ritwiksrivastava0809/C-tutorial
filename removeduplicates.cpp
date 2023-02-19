#include <bits/stdc++.h>

using namespace std;

string removeallduplicates(const string &s)
{
    string arr;
    unordered_set<char> a;

    for (const auto &b : s)
        if (a.insert(b).second)
            arr += b;

    return arr;
}

int main()
{
    int n;
    cin>>n;
   string str;
    for (int i = 0; i <= n; i++)
    {
        cin >> str;
        string a= removeallduplicates(str);
        cout<<a<<endl;
    }
    return 0;
}