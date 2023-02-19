#include <bits/stdc++.h>

using namespace std;

class cmplex;

class A
{
    istream &operator>>(istream &);
    cmplex operator*(cmplex);
    ostream &operator<<(ostream &);
};
class cmplex
{
public:
    int real;
    int img;

    cmplex()
    {
        real = 0;
        img = 0;
    }

    friend class A;
};
istream &operator>>(istream &din, cmplex &c)
{
    cout << "\nenter the real part : ";
    cin >> c.real;
    cout << "\nenter the imaginary part : ";
    cin >> c.img;
    return (din);
}

cmplex operator*(cmplex X, cmplex Y)
{
    cmplex temp;
    temp.real = (X.real * Y.real) - (X.img * Y.img);
    temp.img = (X.real * Y.img) + (X.img * Y.real);
    return temp;
}
ostream &operator<<(ostream &dout, cmplex c)
{
    cout << "(" << c.real << ")"
         << " + i"
         << "(" << c.img << ")";
    return (dout);
}
int main()
{
    cmplex c1, c2, c3;

    cout << "\n\n";

    cout << "                                      COMPLEX C1";

    cin >> c1;

    cout << "                                      COMPLEX C2";

    cin >> c2;

    c3 = c1 * c2;

    cout << "\n\n";

    cout << "                            RESULTANT COMPLEX NUMBER";

    cout << "\n\n                  (" << c1 << ")  *  (" << c2 << ") = " << c3;

    cout << "\n\n";

    return 0;
}