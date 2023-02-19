#include<bits/stdc++.h>

using namespace std ;

class cmplex
{
    int a , b;
    public :

    void set_data(int x , int y)
    { 
        cout<<"\nenter the real part :";
        cin>>x;
        cout<<"\nenter the imaginery part: ";
        cin>>y;

        a= x;
        b=y;
    }

    void show_data()
    {
        cout<<"\nthe sum of complex number is : "<<a<<"+"<<b<<"i"<<endl;
    }


    cmplex add( cmplex c)
    {
        cmplex temp ;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return(temp);
    }
};

int  main()
{
    int x,y;

    cmplex c1 , c2 , c3;
    c1.set_data(x,y);
    c2.set_data(x,y);
    c3 = c1.add(c2);
    c3.show_data();

   return 0;

}