// C++ program to reverse a string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse words*/
void reverseWords(string s)
{
	
	
	vector<string> tmp;
	string str = "";
	for (int i = 0; i < s.length(); i++)
	{
		
		
		if (s[i] == ' ')
		{
			tmp.push_back(str);
			str = "";
		}

	
		else
			str += s[i];
	}


	tmp.push_back(str);

	
	int i;
	for (i = tmp.size() - 1; i > 0; i--)
		cout << tmp[i] << " ";

	cout << tmp[0] << endl;
}
void reverse(string s)
{
    if(s.length()==0)
    {
        return;
    }

    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];

}

int main()
{
	string s;
	getline(cin , s);
	reverseWords(s);
    reverse(s);
	return 0;
}
