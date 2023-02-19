#include<bits/stdc++.h>

  using namespace std;

  int main()
  {
      ifstream fin;
      char ch;
      fin.open("pop12.txt",ios::binary);
      ch=fin.get();
      while(!fin.eof())
      {
          cout<<ch;
          ch=fin.get();
      }
      fin.close();
  }