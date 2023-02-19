#include <bits/stdc++.h>

using namespace std;

int main()
{

   multimap<int, string> m;

   //    m[100] = "ritwik";
   //    m[200] = "chandu";
   //    m[300] = "rishabh";
   //    m[400] = "pranav";
   //    m[500] = "riya";

   int n;
   string s;
   int p;
   cin >> p;

   for (int i = 0; i < p; i++)
   {
      cin >> n >> s;

      m.insert(pair<int, string>(n, s));
   }
   map<int, string>::iterator it = m.begin();

   //    while (it!=m.end())
   //    {
   //        cout<<it->second<<endl;
   //        it++;
   //    }

   cout << "\n\n";

   m.insert(pair<int, string>(250, "naksha"));
   it = m.begin();

   while (it != m.end())
   {
      cout << it->first << " " << it->second << endl;
      it++;
   }
   cout << "\n\n";

   it = m.begin();
   it++;
   it++;

   string i = it->second;
   cout << "the inserted value is : " << i;
   cout << "\nat position : " << it->first;

   cout << "\n\n";

   cout << "thre size of map is: " << m.size();
}