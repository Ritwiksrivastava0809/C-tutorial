#include <bits/stdc++.h>

using namespace std;

template <class X, class Y>

X big(X a, Y b)
{
    if (a > b)
    {

        return (a);
    }
    else
    {

        return (b);
    }
}

int main()
{
    cout << sizeof(big(5.5, 5)) << endl;

    return 0;
}
