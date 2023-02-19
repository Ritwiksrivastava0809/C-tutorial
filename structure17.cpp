#include<bits/stdc++.h>

  using namespace std;

  int main()
  {
           fstream file;
           file.open("pop12.txt");
           int pos = file.tellg();
           cout<<pos;
           cout<<"\n";
           file.seekg(0,ios_base::beg);
           cout<<file.tellg()<<" "<<(char)file.get()<<"\n";
           file.seekg(5,ios_base::beg);
           cout<<file.tellg()<<" "<<(char)file.get();
           file.close();

           
  }