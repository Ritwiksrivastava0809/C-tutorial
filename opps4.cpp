#include<iostream>

using namespace std;

class demo
{
    private:
    int num1 , num2;
    public:
    demo(int n1 , int n2)
    {
        cout<<"inside constructor \n";
        num1 = n1;
        num2 = n2;
    }
    void display()
    {
        cout<<"num1 = "<<num1<<"\n"<<"num2 = "<<num2<<"\n";
    }
    ~demo()
    {
        cout<<"inside destructor";
    }
};

int main()
{
demo obj1(10,20);
obj1.display();
    return 0;
}