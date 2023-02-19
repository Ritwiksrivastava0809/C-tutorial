#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
};

node *start, *ptr = NULL;

void makelist(int element)
{
    node *temp = new node();
    temp->data = element;
    temp->prev = NULL;
    temp->next = NULL;

    if (start == NULL)
    {
        start = temp;
        ptr = temp;
    }
    else
    {
        ptr->next = temp;
        temp->prev = ptr;
        temp->next = NULL;
        ptr = temp;
    }
}

void displaylist(node *start)
{
    int choice;
    cout << "\n1. For forward printing" << endl;
    cout << "2. For backward printing" << endl;
    cout << "Exit :: press any key" << endl;
    cout << "Enter your choice :: " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        // FORWARD PRINTING
        node *current = start;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
        break;
    }
    case 2:
    {
        // BACKWARD PRINTING
        node *curent = start;
        while (curent->next != NULL)
        {
            curent = curent->next;
        }
        while (curent->prev != NULL)
        {
            cout << curent->data << " ";
            curent = curent->prev;
        }
        cout << start->data;
        break;
    }
    default:
        cout << "nikal bsdk";
    }
}

void insertnode(node *start, int element)
{
    node *p = start;
    node *temp = new node();
    int choose;
    cout << "\n1. Insert at beginning" << endl;
    cout << "2. Insert b/w start and end" << endl;
    cout << "3. Insert at the end" << endl;
    cout << "Exit: Press any key" << endl;
    cout << "Enter the choice :: ";
    cin >> choose;
    switch (choose)
    {
    case 1:
    {
        temp->data = element;
        temp->prev = NULL;
        temp->next = start;
        start = temp;
        displaylist(start);
        break;
    }

    case 2:
    {
        int pos;
        cout << "enter the node after which node has to be inserted: ";
        cin >> pos;
        node *ptr;
        temp->data = element;
        while (p->data != pos)
        {
            ptr = p;
            p = p->next;
        }
        temp->prev = ptr;
        temp->next = p;
        ptr->next = temp;
        p->prev = temp;
        displaylist(start);
        break;
    }

    case 3:
    {
        p = start;
        temp->data = element;
        temp->next = NULL;
        temp->prev = NULL;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
        temp->prev = p;
        displaylist(start);
        break;
    }
    default:
        cout << "chala ja bsdk";
    }
}

void deletenode(node *start)
{
    node *p = start;
    node *temp;
    int choose;
    cout << "\n1. Delete at beginning" << endl;
    cout << "2. Delete b/w start and end" << endl;
    cout << "3. Delete at the end" << endl;
    cout << "Exit: Press any key" << endl;
    cout << "Enter the choice :: ";
    cin >> choose;
    switch (choose)
    {
    case 1:
    {
        start = p->next;
        free(p);
        displaylist(start);
        break;
    }

    case 2:
    {
        p = start;
        int pos;
        cout << "\nEnter the node you want to delete: ";
        cin >> pos;
        while (p->data != pos)
        {
            temp = p;
            p = p->next;
        }
        temp->next = p;
        p->next->prev = temp;
        free(p);
        displaylist(start);
        break;
    }

    case 3:
    {
        p = start;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->prev->next = NULL;
        free(p);
        displaylist(start);
        break;
    }

    default:
        cout << "chla ja bsdk";
    }
}

void searchnode(node *start, int element)
{
    node *p = start;
    int a;
    int counter = 0;
    while (p->next != NULL)
    {
        if (p->data == element)
        {
            a = 1;
        }
        p = p->next;
    }
    if (a == 1)
    {
        p = start;
        while (p->data != element)
        {
            p = p->next;
            counter++;
        }
        cout << "The desired node is at index:  " << counter;
    }
    else
    {
        cout << "The desired does not found";
    }
}

void sortlist(node *start)
{
    node *p = start;
    node *temp = NULL;
    int counter;
    for (p = start; p != NULL; p = p->next)
    {
        for (temp = p->next; temp != NULL; temp = temp->next)
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
    int a = 1;
    while (a == 1)
    {

        int choose;
        cout << "\n1. Insert the element " << endl;
        cout << "2. Delete the element " << endl;
        cout << "3. Search the Element " << endl;
        cout << "4. Sort the given list" << endl;
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
            deletenode(start);
            break;
        }

        case 3:
        {
            // SEARCHING IN NODE
            int data;
            cout << "Enter the data which you want to search: ";
            cin >> data;
            searchnode(start, data);
            break;
        }

        case 4:
        {
            // SORTING THE LIST
            sortlist(start);
            break;
        }

        default:
        {
            cout << " not worth it " << endl;
        }
        }

        cout << "If you want to continue press 1" << endl;
        cin >> a;
        if (a != 1)
        {
            cout << "code ends here";
            break;
        }
    }

    return 0;
}