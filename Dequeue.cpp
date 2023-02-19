#include <bits/stdc++.h>

using namespace std;

#define MAX 100

class Deque
{
    int arr[MAX];
    int front;
    int rear;
    int size;

public:
    Deque(int size)
    {
        front = -1;
        rear = 0;
        this->size = size;
    }

    // Operations on Deque:
    void insertfront(int key);
    void insertrear(int key);
    void deletefront();
    void deleterear();
    bool isFull();
    bool isEmpty();
    void getFront();
    void getRear();
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
            cout<<"make choise: ";
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

bool Deque::isFull()
{
    return ((front == 0 && rear == size - 1) || front == rear + 1);
}

bool Deque::isEmpty()
{
    return (front == -1);
}

void Deque::insertfront(int key)
{
    // check whether Deque if full or not
    if (isFull())
    {
        cout << "Overflow\n"
             << endl;
        return;
    }

    // If queue is initially empty
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }

    // front is at first position of queue
    else if (front == 0)
        front = size - 1;

    else // decrement front end by '1'
        front = front - 1;

    // insert current element into Deque
    arr[front] = key;
}

void Deque ::insertrear(int key)
{
    if (isFull())
    {
        cout << " Overflow\n " << endl;
        return;
    }

    // If queue is initially empty
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }

    // rear is at last position of queue
    else if (rear == size - 1)
        rear = 0;

    // increment rear end by '1'
    else
        rear = rear + 1;

    // insert current element into Deque
    arr[rear] = key;
}

void Deque ::deletefront()
{
    // check whether Deque is empty or not
    if (isEmpty())
    {
        cout << "Queue Underflow\n"
             << endl;
        return;
    }

    // Deque has only one element
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
        // back to initial position
        if (front == size - 1)
            front = 0;

        else // increment front by '1' to remove current
            // front value from Deque
            front = front + 1;
}

void Deque::deleterear()
{
    if (isEmpty())
    {
        cout << " Underflow\n"
             << endl;
        return;
    }

    // Deque has only one element
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
        rear = size - 1;
    else
        rear = rear - 1;
}

void Deque::getFront()
{
    // check whether Deque is empty or not
    if (isEmpty())
    {
        cout << " Underflow\n"
             << endl;
    }
    else
    {
        cout << arr[front];
    }
}

void Deque::getRear()
{
    // check whether Deque is empty or not
    if (isEmpty() || rear < 0)
    {
        cout << " Underflow\n"
             << endl;
    }
    else
    {
        cout << arr[rear];
    }
}

int main()
{
    Deque dq(5);
    dq.swtichcase();
    return 0;
}
