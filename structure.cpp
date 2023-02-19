#include<bits/stdc++.h>

using  namespace std;
// struct book
// {
//     int  bookid;
//     char title[20];
//     float price;
// };

// book input()
// {
//     book b;
//     cin>>b.bookid>>b.title>>b.price;
//     return(b);
// }
// void display(book b1)
// {
//     cout<<"\n"<<b1.bookid<<" "<<b1.title<<" "<<b1.price<<"\n";
// }
// int main()
// {
//     book b1;
//     b1 = input();
//     display(b1);
//     return 0;
// }

class book
{
    
    int  bookid;
    char title[25];
    float price;

    public :
    
    void input()
{
   cout<<"enter the book id title and price of the book: ";
    cin>>bookid;
    
    // space leke aise dalte char array

    cin.getline(title , 25);
    cin>>price;
}

void display()
{
    cout<<"\n"<<"book id = "<<bookid<<"\n"<<"title = "<<title<<"\n"<<"price = "<<price<<"\n";
}

};

int main()
{
    book b1;
    b1.input();
    b1.display();

    return 0;
}