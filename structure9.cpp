// done using contructor

// #include <bits/stdc++.h>

// using namespace std;

// class arry
// {
// private:
//     int arr[5];

// public:
//     void insert(int index, int value)
//     {
//         arr[index] = value;
//     }

//     void display()
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cout << arr[i] << " ";
//         }
//     }
// };

// class stacks : protected arry
// {
//     int top;

// public:
//     void push(int value)
//     {

//         insert(top, value);

// yaha pe top ko increament krna padega warna bar baar value karta rahega

//         top++;

//     }

//     stacks()
//     {
//         top = 0;
//     }

//     void display1()
//     {
//         display();
//     }
// };

// int main()
// {
//     stacks s1;

//     for (int i = 0; i < 5; i++)
//     {
//         int x;
//         cin >> x;
//         s1.push(x);
//     }

//     s1.display1();

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int n;

class arry
{
    // dynamically aloting the memory of array

    int *arr = new int[n];

public:
    void insert(int index, int value)
    {
        arr[index] = value;
    }
    void delete (int index)
    {
        index--;
    }
    void display()
    {
        cout << "the desired stack is = ";

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

class stacks : protected arry
{
    int top = 0;

public:
    void push(int value)
    {

        insert(top, value);

        // yaha pe top ko increament krna padega warna bar baar value karta rahega

        top++;
    }
    void pop()
    {

        top = n-1;

        delete(top);

        top --;
    }
    void display1()
    {
        display();
    }
};

int main()
{

    cout << "enter the size of stack: ";

    cin >> n;

    stacks s1;

    cout << "enter the elements  of the stack: ";

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1.push(x);
    }
     s1.pop();

    s1.display1();

    return 0;
}