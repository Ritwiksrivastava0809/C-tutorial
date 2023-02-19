#include<bits/stdc++.h>

  using namespace std;

  int main()
  {
      fstream file;
      char ch;
      streampos pos;
      file.open("pop12.txt");

      while(!file.eof())
      {
          pos = file.tellg();
          cout<<pos<<" ";
           ch=file.get();
      }
      cout<<"\n";
      file.close();

      file.open("pop12.txt");
        int pos1 ;
        file<<" nhi mila bhai ";
        pos1 = file.tellp();
        cout<<pos1;
      file.close();
  }