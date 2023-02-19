#include <bits/stdc++.h>

using namespace std;

class cmplex
{
    int a;
    int b;

public:

cmplex()
{
    a=0;
    b=0;
}

    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void showdata()
    {
        cout << "sum is = " << a << "+" << b<<"i" << endl;
    }

    friend cmplex operator + (cmplex, cmplex);
};
 
cmplex operator+ (cmplex X, cmplex Y)
{
    cmplex temp;
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;
    return (temp);
}
int main()
{
    cmplex c1, c2, c3;
    c1.setdata(4, 5);
    c2.setdata(6, 7);

    c3 = c1 + c2;

    c3.showdata();

    return 0;
}