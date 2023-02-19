#include <iostream>

using namespace std;

class arraylist
{
private:
    struct controlblock
    {
        int capacity;
        int *arr_ptr;
    };
    controlblock *s;

public:
    arraylist(int capacity)
    {
        s = new controlblock;
        s->capacity = capacity;
        s->arr_ptr = new int[s->capacity];
    }

    void addelement(int index, int data)
    {
        if (index >= 0 && index <= s->capacity - 1)
        {
            s->arr_ptr[index] = data;
        }
        else
        {
            cout << "\nArray index is not valid";
        }
    }
    void viewelement(int index, int data)
    {
        if (index >= 0 && index <= s->capacity - 1)
        {
           data = s->arr_ptr[index];
           cout<<data;
        }
        else
        {
            cout << "\nArray index is not valid";
        }
    }
    void viewlist()
    {
        int i;
        for (i = 0; i < s->capacity; i++)
        {
            cout << " " << s->arr_ptr[i];
        }
    }
};
int main()
{
    int data;
    arraylist list1(4);
    list1.addelement(0,3);
    list1.addelement(1,4);
    list1.addelement(2,5);
    list1.addelement(3,6);

    list1.viewelement(1,data);
    list1.viewlist();

     return 0;

}