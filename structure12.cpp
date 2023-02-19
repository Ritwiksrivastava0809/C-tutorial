#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string sentence;
  string mysent;

  //Creates an instance of ofstream, and opens example.txt
  ofstream a_file ( "example45.txt", ios::app );
  cin >>mysent;
  // Outputs to example.txt through a_file
  a_file << mysent << "\n";
  // Close the file stream explicitly
  a_file.close();
  //Opens for reading the file
  ifstream b_file ( "example.txt" );
  //Reads one string from the file
  b_file>> mysent;
  cout<< "Please Write the sentence:" <<"\n";
  cin >> sentence;
  if (sentence == mysent)

  {
     cout << "you did it right!" << "\n";
  }
  else
  {
      cout << "No!" << endl;
  }
  system("pause");    // wait for a keypress
  // b_file is closed here
}