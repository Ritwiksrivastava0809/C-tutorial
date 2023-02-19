#include <bits/stdc++.h>

using namespace std;

struct data
{
    char name[30];
    long teleno;
};

class hashing
{
    int n, sum, x, c, i, j;
    char na[30];
    long no;
    data d[10];

public:
    hashing()
    {
        for (i = 0; i < 10; i++)
        {
            d[i].teleno = 0;
        }
    }

    void insert();
    void search();
    void dispaly();
    
};

void hashing::insert()
{
    cout << "Enter the number no. of clients : : ";
    cin >> n;
    for (j = 0; j < n; j++)
    {
        cout << "\nEnter the name of client :: ";
        cin >> na;
        cout << "\nEnter the number of the client :: ";
        cin >> no;
        sum = 0;
        for (i = 0; i < strlen(na); i++)
        {
            sum = sum + ( na[i]);
        }
        x = (sum) % 10;
    
        c = x;
        while (1)
        {
            if (d[x].teleno == 0)
            {
                strcpy(d[x].name, na);
                d[x].teleno = no;
                break;
            }
            x = (x + 1) % 10;
            if (c == x)
            {
                cout << "\nHash table is full !";
                break;
            }
        }
    }
}

void hashing ::search()
{
    cout << "\nEnter the name of client to be searched :: ";
    cin >> na;
    for (i = 0; i < strlen(na); i++)
    {
        sum = sum + (na[i]);
    }
    x = (sum) % 10;
    c = x;

    while (1)
    {
        if (!strcmp(d[x].name, na))
        {
            cout << "\nData found :: Telephone no. :: " << d[x].teleno;
            break;
        }
        x=(x+1)%10;
        if (c == x)
        {
            cout << "\nData not found !";
            break;
        }
    }
}

void hashing ::dispaly()
{
    for (int i = 0; i <10; i++)
    {
        cout<<endl<<d[i].name<<" "<<d[i].teleno;
    }
}

int main()
{
    hashing h;
    h.insert();
    h.search();
    // h.dispaly();
    return 0;
}