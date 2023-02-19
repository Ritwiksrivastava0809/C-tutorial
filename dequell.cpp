#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
};

node *start = NULL;

class DQ : public node
{
    node *front;
    node *rear;
    int Size;

public:
    DQ()
    {
        front = NULL;
        rear = NULL;
        Size = 0;
    }
    // Operations on Deque:
    void insertfront(int key);
    void insertrear(int key);
    void deletefront();
    void deleterear();
    bool isEmpty();
    void getFront();
    void getRear();
    int size();
    void erase();
    void swtichcase()
    {
        int a = 1;
        while (a == 1)
        {
            int choose;
            cout << "\n1.Insert the element from front" << endl;
            cout << "2.Insert the element from rear" << endl;
            cout << "3.Delete the element from front" << endl;
            cout << "4.Delete the element from rear" << endl;
            cout << "5.Print the front element " << endl;
            cout << "6.Print the rear element" << endl;
            cout << "7.Erase the queue" << endl;
            cout << "make choise: ";
            cin >> choose;
            switch (choose)
            {
            case 1:
            {
                int element;
                cout << "enter the element to be inserted: ";
                cin >> element;
                insertfront(element);
                break;
            }

            case 2:
            {
                int element;
                cout << "enter the element to be inserted: ";
                cin >> element;
                insertrear(element);
                break;
            }
            case 3:
            {
                deletefront();
                break;
            }

            case 4:
            {
                deleterear();
                break;
            }
            case 5:
            {
                getFront();
                break;
            }

            case 6:
            {
                getRear();
                break;
            }

            case 7:
            {
                erase();
                break;
            }

            default:
            {
                cout << "bhaag bsdk kuch bhi daba rha";
                break;
            }
                cout << "If you want to continue press 1" << endl;
                cin >> a;
                if (a != 1)
                {
                    cout << "code ends here";
                    break;
                }
            }
        }
    }
};

int DQ::size()
{
    return Size;
}

bool DQ::isEmpty()
{
    return (start == NULL);
}

void DQ::insertfront(int key)
{
    node *temp = new node();
    if (isEmpty())
    {
        temp->data = key;
        temp->prev = NULL;
        temp->next = NULL;
        start = temp;
        front = temp;
        rear = temp;
    }

    else
    {
        temp->data = key;
        temp->prev = NULL;
        temp->next = start;
        start->prev = temp;
        start = temp;
        front = temp;
    }
    Size++;
}

void DQ::insertrear(int key)
{
    node *temp = new node();
    if (isEmpty())
    {
        temp->data = key;
        temp->prev = NULL;
        temp->next = NULL;
        start = temp;
        front = temp;
        rear = temp;
    }
    else
    {
        temp->data = key;
        temp->prev = rear;
        rear->next = temp;
        temp->next = NULL;
        rear = temp;
    }
    Size++;
}

void DQ::deletefront()
{
    if (isEmpty())
    {
        cout << "underflow";
        return;
    }
    else
    {
        node *temp = start;
        start = temp->next;
        front = start;
        free(temp);
    }
    Size--;
}

void DQ::deleterear()
{

    if (isEmpty())
    {
        cout << "underflow";
        return;
    }
    else
    {
        node *temp = rear;
        rear = temp->prev;
        free(temp);
    }
    Size--;
}

void DQ::getFront()
{
    if (isEmpty())
    {
        cout << "queue is empty";
    }
    else
    {
        cout << front->data << endl;
        cout << "the size of queue is: " << Size;
    }
}

void DQ::getRear()
{
    if (isEmpty())
    {
        cout << "queue is empty";
    }
    else
    {
        cout << rear->data<<endl;
        cout << "the size of queue is: " << Size;
    }
}

void DQ::erase()
{
    rear = NULL;
    while (front != NULL)
    {
        node *temp = front;
        front = front->next;
        free(temp);
    }
    Size = 0;
}

int main()
{
    DQ dq;
    dq.swtichcase();
    return 0;
}
