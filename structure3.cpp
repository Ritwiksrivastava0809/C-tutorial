#include<bits/stdc++.h>

using namespace std;

class integer
{
      int x;

      public:

      void setdata(int a)
      {
                 x = a;
      }

      void showdata()
      {
             cout<<"x = "<<x<<endl;
      }
  
        integer operator ++(int)
        {
             integer i;

             i.x = x++;

             return(i);
        }

};


int main()
{
    integer i1, i2;

    i1.setdata(3);

    i2 = i1++ ;

    i1.showdata();
    i2.showdata();
    
      i2 = i1++ ;

    i2.showdata();
    i1.showdata();
    return 0 ;

}