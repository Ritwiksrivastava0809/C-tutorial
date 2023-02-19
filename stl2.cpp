#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v1;
    cout << "curent capacity: " << v1.capacity() << endl;
    for (int i = 0; i <= 9; i++)
    {
        v1.push_back(10 * (i + 1));
    }
    cout << "curent capacity: " << v1.capacity() << endl;
    cout << "size of vector is: " << v1.size() << endl;

    for (int i = 0; i <= 9; i++)
    {
        cout << endl
            << v1[i];
    }

    auto it = v1.begin();
    v1.insert(it + 3, 35);

    cout << "\n\n";

    for (int i = 0; i <= 9; i++)
    {
        cout << endl
            << v1[i];
    }
    cout << "\nfirst value of v1 is: " << v1.front();
    cout << "\nlast value of v1 is: " << v1.back();

    return 0;
}