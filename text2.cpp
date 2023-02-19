#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int counter = 0;
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
        if (counter > freq[x])
        {
            continue;
        }
        else
        {
            counter = freq[x];
        }
    }
    cout << counter << endl;
    return 0;
}