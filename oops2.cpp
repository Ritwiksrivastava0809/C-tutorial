#include <iostream> 

using namespace std;

class complex
{
    public:
    int real,img;

    void initcomplex()
    { 
       cout<<" enter the real part: ";
       cin>>real;

       cout<<"enter the imaginary part: ";
       cin>>img;
    } 
    void display()
    {
        cout<<real<<"+"<<img<<"i \n";
    }

    void multiplication(complex c1, complex c2)
    {
        real = (c1.real)*(c2.real) - (c1.img)*(c2.img);
        img = (c1.real)*(c2.img) + (c1.img)*(c2.real);
    }

  };
    int main()
    {
        complex c1,c2,c3;
        cout<<"enter first complex number\n";
        c1.initcomplex();
        cout<<"first complex no: ";
        c1.display();
        cout<<"enter second complex no.\n";
        c2.initcomplex();
        cout<<"second complex no.: ";
        c2.display();
        cout<<"the multiplication of complex number is :\n ";
        c3.multiplication(c1,c2);
        c3.display();
        return 0;
    }