#include<bits/stdc++.h>

using namespace std;

class student
{
    private:
         int rollno ;
         char name[20];
         int year;
         char division[2];
         char dob[20];
         char bloodgroup[3];
         int telnumber;
         int dlno;


         class address
         {
             private:
              int houseno;
              char street[20];
              char city[20];
              char state[20];
              char pincode[7];

             public:
                    void set_address(int h, char *s, char *c, char *st, char *p)
                    {
                       
                        houseno = h;
                        strcpy(street , s);
                        strcpy(city, c);
                        strcpy(state , st);
                        strcpy(pincode, p);

                    } 

                 void show_address()
                 {
                     cout<<"\n"<<houseno<<endl;
                     cout<<street<<" "<<city;
                     cout<<" "<<state<<endl;
                     cout<<pincode<<endl;

                 }   

         };         

         student()
         {
             rollno = 0;
             year = 0;   
             telnumber = 0;
             dlno=0;
         }  

            address add;
             
    public:
    void set_rollno(int r)
    {
        rollno = r;
    }              
    void set_name(char *n)
    {
        strcpy(name,n);
    }    
    void set_year(int n)
    {
          year = n;
    }
     void set_division(char *d)
    {
          strcpy(division,d);
    }
     void set_dob(char *n)
    {
          strcpy(dob,n);
    }
     void set_bloodgroup(char *b)
    {
          strcpy(bloodgroup,b);
    }
     void set_telnumber(int n)
    {
          telnumber = n;
    }
     void set_dlno(int n)
    {
          dlno= n;
    }
    void set_address(int h, char* s, char *c, char *st, char *p)
    {
        add.set_address(h,s,c,st,p);
    }
    void showstudent()
    {
           cout<<" **********************************STUDENT DATA ************************************** "<<endl;
           cout<<"ROLL NO."<<rollno<<" ";
           cout<<"\nNAME "<<name<<" ";
           cout<<"\nYEAR "<<year<<" "<<"\n";
           cout<<"DIVISION "<<division<<" ";
           cout<<"\nDATE OF BIRTH "<<dob<<" "<<"\n";
           cout<<"BLOOD TYPE "<<bloodgroup<<" "<<"\n";
           cout<<"TELEPHONE NUMBER "<<telnumber<<" "<<"\n";
           cout<<"DRIVING LISENCE "<<dlno<<" "<<"\n";
           add.show_address();
    }
               ~student()
         {
             cout<<"\n\ndestructor is called";
         }

};

//globaly declaration of object

student s1;

int main()
{ 
    s1.set_rollno(100);
    s1.set_name("ritwik srivastava");
    s1.set_year(1);
    s1.set_division("B1");
    s1.set_dob("08-05-2001");
    s1.set_bloodgroup("B+");
    s1.set_telnumber(8840938585);
    s1.set_dlno(35825685);
    s1.set_address(301,"hanuman gali","bhopal","madhya pradesh","462041");
    s1.showstudent();
}