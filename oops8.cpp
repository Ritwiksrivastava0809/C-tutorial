#include <iostream>
#include <string>

using namespace std;

class publication
{
protected:
    string title;
    float price;

public:
    publication()
    {

        title = " ";
        price = 0.0;
    }
    publication(string t, float p)
    {
        title = t;
        price = p;
    }
};

class book : public publication
{
    int pagecount;

public:
    book()
    {
        pagecount = 0;
    }
    book(string t, float p, int pc) : publication(t, p)
    {
        pagecount = pc;
    }
    void display()
    {
        cout << "title : " << title << endl;
        cout << "price: " << price << endl;
        cout << "pagecount: " << pagecount << endl;
    }
};

class cd : public publication
{
    float time;

public:
    cd()
    {
        time = 0.0;
    }
    cd(string t, float p, float tim) : publication(t, p)
    {
        time = tim;
    }
    void display()
    {

        cout << "title : " << title << endl;
        cout << "time : " << time << endl;
        cout << "price : " << price << endl;
    }
};

int main()
{
    cout << "\n"
         << "Book Data " << endl;
    book b("c++", 230, 300);
    b.display();
    cout << "\n"
         << "cd data " << endl;
    cd c("programming", 100, 120.5);
    c.display();

    return 0;
}