#include<iostream>
#include<fstream>

using namespace std;

static int totrec = 0;

int main()
{
    int choice ;
    while(1)
    {
        cout<<"\n choose your choise  :: \n";
        cout<<"1) ENTER THE NEW RECORD ::\n";
        cout<<"2) APPEND NEW RECORDS :: \n";
        cout<<"3) MODIFYING AND APPEND NEW RECORDS :: \n";
        cout<<"4) DISPLAY RECORDS :: \n";
        cout<<"5) EXIT \n";
        cout<<" \nENTER YOUR CHOICE :: \n";
        cin>>choice;

        switch(choice)
        {
            case 1 :
                        {
                            ofstream outfile;
                            outfile.open("C: \\file4.txt",ios::out);
                            cout<<"\n PLEASE ENTER THE DETAILS :: \n";
                            cout<<"\n ENTER THE NAME \n ";
                            char name[20];
                            cin>>name; 
                            outfile<<name<<endl;
                            cout<<"\n ENTER AGE\n ";
                            int age;
                            cin>>age;
                            outfile<<age<<endl;
                            cout<<"\n ENTER THE PREFERED PROGRAMMING LANGUAGE \n ";
                            char lang[20];
                            cin>>lang;
                            outfile<<lang<<endl;
                            totrec = totrec + 1;
                            outfile.close();
                        }
                        break;

            case 2 :
                         {
                            ofstream outfile;
                            outfile.open("C: \\file4.txt",ios::app);
                            cout<<"\n PLEASE ENTER THE DETAILS :: \n ";
                            cout<<"\n ENTER THE NAME \n ";
                            char name[20];
                            cin>>name;
                            outfile<<name<<endl;
                            cout<<"\n ENTER AGE\n ";
                            int age;
                            cin>>age;
                            outfile<<age<<endl;
                            cout<<"\n  ENTER THE PREFERED PROGRAMMING LANGUAGE \n ";
                            char lang[20];
                            cin>>lang;
                            outfile<<lang<<endl;
                            totrec = totrec + 1;
                            outfile.close();
                         }            
                         break;

           case 3 :
                        {
                            ofstream outfile;
                            outfile.open("C: \\file4.txt",ios::ate);
                            cout<<" \n WANT TO ADD NEW RECORDS :: \n ENTER Y OR N \n ";
                            char ans;
                            cin>>ans;
                            if(ans== 'y' || ans== 'n')
                            {
                             cout<<"\n PLEASE ENTER THE DETAILS :: \n ";
                             cout<<"\n ENTER THE NAME \n ";
                             char name[20];
                             cin>>name;
                             outfile<<name<<endl;
                             cout<<"\n ENTER AGE\n ";
                             int age;
                             cin>>age;
                             outfile<<age<<endl;
                             cout<<"\n  ENTER THE PREFERED PROGRAMMING LANGUAGE \n ";
                             char lang[20];
                             cin>>lang;
                             outfile<<lang<<endl;
                             totrec = totrec + 1;
                            }
                            outfile.close();
                        } 
                        break;
            case 4 :
                         {
                             ifstream infile;
                            infile.open("C: \\file4.txt",ios::in);
                            const int size = 80;
                            char line[size];
                            int counter = totrec;
                            while(counter > 0)
                            {
                                infile.getline(line ,  size);
                                cout<<" \n NAME               :: "<<line<<endl;
                               infile.getline(line ,  size);
                                cout<<" \n AGE                :: "<<line<<endl;
                                infile.getline(line ,  size);
                                cout<<" \n LANGUAGE               :: "<<line<<endl;
                            counter --;
                            }
                            infile.close();
                         }            
                         break;

           case 5 :
                       {
                           exit(0);
                       }  

            default :
            cout<<" \n invalid choice \n try again \n";

        }

    }

    return 0;

}