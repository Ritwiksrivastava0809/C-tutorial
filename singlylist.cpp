#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *link;
};

node *start, *ptr = NULL;

void makelist(int element)
{
    node *temp = new node();
    temp->data = element;
    temp->link = NULL;
    if (start == NULL)
    {
        start = temp;
        ptr = temp;
    }
    else
    {
        ptr->link = temp;
        ptr = temp;
    }
}

void displaylist(node *start)
{
    node *current;
    current = start;
    while (current != NULL)
    {
        cout << current->data << "   ";
        current = current->link;
    }
}

void sortlist(node *start)
{
    node *p = start;
    node *temp = NULL;
    int counter;
    for (p = start; p != NULL; p = p->link)
    {
        for (temp = p->link; temp != NULL; temp = temp->link)
        {
            if (temp->data > p->data)
            {
                counter = temp->data;
                temp->data = p->data;
                p->data = counter;
            }
        }
    }
    displaylist(start);
}

void insertnode(node *start, int element)
{
    node *p = start;
    node *temp = new node();
    int choose;
    cout << "\n1. Insert at beginning" << endl;
    cout << "2. Insert anywhere" << endl;
    cout << "Exit: Press any key" << endl;
    cout << "Enter the choice :: ";
    cin >> choose;
    switch (choose)
    {
    case 1:
    {
        temp->link = start;
        temp->data = element;
        start = temp;
        displaylist(start);
        break;
    }
        cout << "\n";
    case 2:
    {
        int pos;
        cout << "Enter the postion at which node to be inserted: ";
        cin >> pos;
        while (p->data != pos)
        {
            p = p->link;
        }
        temp->link = p->link;
        p->link = temp;
        temp->data = element;
        displaylist(start);
        break;
    }
    default:
        cout << "\nmein madharchod hoon jo isme aya" << endl;
    }
}

void deletenode(int pos, node *start)
{
    node *p = start;
    node *temp;
    if (pos == p->data)
    {
        start = p->link;
        free(p);
        displaylist(start);
    }
    else
    {
        while (p->data != pos)
        {
            temp = p;
            p = p->link;
        }
        temp->link = p->link;
        free(p);
        displaylist(start);
    }
}

void searchnode(int element, node *start)
{
    node *p = start;
    int a;
    int counter = 0;
    while (p != NULL)
    {
        if (p->data == element)
        {
            a = 1;
        }
        // counter++;
        p = p->link;
    }
    if (a == 1)
    {
        p = start;
        while (p->data != element)
        {
            p = p->link;
            counter++;
        }
        cout << "the desired node exists at index: " << counter;
    }
    if (a != 1)
    {
        cout << "The desired node does not exist";
    }
}

void reversenode(node *start)
{
    node *ptr = start;
    node *prev, *next = NULL;
    while (ptr != NULL)
    {
        next = ptr->link;
        ptr->link = prev;
        prev = ptr;
        ptr = next;
    }
    start = prev;
    displaylist(start);
}

int main()
{
    int n;
    cout << "enter the number of nodes to be created: ";
    cin >> n;
    int element;
    cout << "\nenter  the elements to be inserted in linked list: ";

    for (int i = 0; i < n; i++)
    {
        cin >> element;
        makelist(element);
    }

    cout << "the elements of linked list are: ";

    displaylist(start);

    int choose;
    cout << "\n1. Insert the element " << endl;
    cout << "2. Delete the element " << endl;
    cout << "3. Search the Element " << endl;
    cout << "4. Reverse the linked list" << endl;
    cout << "5. Sort the given list" << endl;
    cout << "Exit: Press any key" << endl;
    cout << "Enter the choice :: ";

    cin >> choose;

    switch (choose)
    {
    case 1:
    {
        //  INSERTION OF NODE

        int element;
        cout << "Enter the element to be inserted in the new node: ";
        cin >> element;
        insertnode(start, element);
        break;
    }

    case 2:
    {
        // DELETION OF NODE
        int pos;
        cout << "Enter the position of node to be deleted: ";
        cin >> pos;
        deletenode(pos, start);
        break;
    }

    case 3:
    {
        // SEARCHING IN NODE
        int data;
        cout << "Enter the data which you want to search: ";
        cin >> data;
        searchnode(data, start);
        break;
    }

    case 4:
    {
        reversenode(start);
        break;
    }

    case 5:
    {
        sortlist(start);
        break;
    }

    default:
    {
        cout << " not worth it " << endl;
    }
    }
    return 0;
}



