  #include<bits/stdc++.h>

  using namespace std;

  int main()
  {
      fstream fout;
      fout.open("lala.txt");
      fout<<"hello rishabh kaise ho bhai";
       fout.close();
    
    fout.open("lala.txt");
    char ch;
    ch = fout.get();
    while (!fout.eof())
    {
         cout<<ch;
         ch=fout.get();
    }
      fout.close();
   

  }   