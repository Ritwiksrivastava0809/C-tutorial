#include <bits/stdc++.h>

using namespace std;

class student
{
private:
    string name;
    int age;

public:
    void setstudent(string n, int a)
    {
        name = n;
        age = a;
    }

    void showstudent()
    {
        cout << "\n"
            << "Name = " << name;
        cout << "\nage = " << age;
    }
};
int main()
{
    pair<string, int> p1;
    pair<string, string> p2;
    pair<string, float> p3;
    student s1;
    pair<string, student> p4;

    p1 = make_pair("ritwik", 20);
    p2 = make_pair("varanasi", "pune");
    p3 = make_pair("computer networking", 387.7f);
    s1.setstudent("rishabh", 19);
    p4 = make_pair("aids", s1);

    cout << p1.first << "  " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << p3.first << " " << p3.second << endl;
    cout << p4.first << " ";
    student s2 = p4.second;
    s2.showstudent();
}