#include <bits/stdc++.h>

using namespace std;

#define max 100

class circularque
{
    int front;
    int rear;
    int Size;
    int *arr;

public:
    circularque(int s)
    {
        front = -1;
        rear = -1;
        Size = s;
        int *arr = new int[s];
    }

    void enque(int key);
    void deque();
    void getqueue();
    void getFront();
    void getRear();
    void switchcase()
    {
        int a = 1;
        while (a == 1)
        {
            int choose;
            cout << "1.Insert the element" << endl;
            cout << "2.Delete the element" << endl;
            cout << "3.Print the  whole queue" << endl;
            cout << "4.Print the front element" << endl;
            cout << "5.Print the rear element" << endl;
            cout << "Enter the choice: ";

            cin >> choose;

            switch (choose)
            {
            case 1:
            {
                int element;
                cout << "Enter the value to be inserted in queue: ";
                cin >> element;
                enque(element);
                break;
            }

            case 2:
            {
                deque();
                break;
            }

            case 3:
            {
                getqueue();
                break;
            }

            case 4:
            {
                getFront();
                break;
            }

            case 5:
            {
                getRear();
                break;
            }

            default:
            {
                cout << "nikal bsdk";
                break;
            }
            }
            cout << "\nPress 1 to continue if not press another key";
            cin >> a;
            if (a != 1)
            {
                break;
            }
        }
    }
};

void circularque::enque(int key)
{
    if ((front == 0 && rear == Size - 1) ||
        (rear == (front - 1) % (Size - 1)))
    {
        cout << "\nQueue is Full";
        return;
    }

    else if (front == -1) /* Insert First Element */
    {
        front = rear = 0;
        arr[rear] = key;
    }

    else if (rear == Size - 1 && front != 0)
    {
        rear = 0;
        arr[rear] = key;
    }

    else
    {
        rear++;
        arr[rear] = key;
    }
}

void circularque::deque()
{
    if (front == -1)
    {
        cout << "Queue is empty";
        return;
    }
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % Size;
    }
}

void circularque::getqueue()
{
    if (front == -1)
    {
        cout << "The queue is empty";
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
    }
}

void circularque::getFront()
{
    if (front == -1)
    {
        cout << "The queue is empty";
    }
    else
    {
        cout << "The indexing of front is: " << front << endl;
        cout << "The value of front is: " << arr[front];
    }
}

void circularque::getRear()
{
    if (front == -1)
    {
        cout << "The queue is empty";
    }
    else
    {
        cout << "The indexing of rear is: " << rear << endl;
        cout << "The value of rear is: " << arr[rear];
    }
}

int main()
{
    circularque cq(5);
    cq.switchcase();
    return 0;
}