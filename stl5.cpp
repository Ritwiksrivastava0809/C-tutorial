#include<bits/stdc++.h>
using namespace std;
class publication // base class
{
 protected:
 string title;
 float price;

 public:
 //created a constructor
 // default constructor
 publication()
 {
 title=" ";
 price=0.0;

 }
 //paramatrized constructor

 publication(string t, float p)
 {
 title=t;
 price=p;

 }

 };
 class book : public publication //derived class from publication
 {
     private:

         int pagecount;

 public:
 //default constructor

 book()
 {
 pagecount=0;

 }
 //After : base class constructor is called
 book(string t, float p, int pc):publication(t,p)
 {

 pagecount=pc;

 }

 void display()
 {

 cout<<"title :"<<title<<endl;
 cout<<"Price: "<<price<<endl;

 cout<<"Pagecount :"<<pagecount<<endl;

 }

 };
class CD : public publication // derived class from base class publication
 {
 float time; //datamember of class cd
 public:
 CD()
 {
 time=0.0;

 }
 //After : base class constructor is called
 CD(string t, float p, float tim):publication(t,p)
 {

  time=tim;

 }

 void display()
 {
 cout<<"title :"<<title<<endl;
 cout<<"Price: "<<price<<endl;
 
 cout<<"time in minutes :"<<time<<endl;

 }

 };
int main()
{
 cout<<endl<<"Book data"<<endl;
 book b("C++",230,300);
 b.display();
 cout<<endl<<"CD Data"<<endl;
 CD c("programming",100,120.5);
 c.display();
 return 0;
 }