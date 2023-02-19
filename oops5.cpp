#include<iostream>

using  namespace std;

class test
{
    private:
    int x;
    public:
        void setX (int x)
        {
            this -> x = x;
        }
       void display()
       {
           cout<<" x = "<<x<<"\n";
       }  
};
int main()
{
      test obj;
      int x=20;
     obj.setX(x);
     obj.display();
    return 0;
}