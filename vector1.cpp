#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v1{3, 2, 5, 3, 1, 4};

    vector<int> even;
    vector<int> odd;

    for (int i = 0; i  <=5; i++)
    {
        if (v1[i] % 2 == 0)
        {
            even.push_back(v1[i]);
        }
        else
        {
            odd.push_back(v1[i]);
        }
    }
 
 sort(odd.begin(),odd.end());   

    for (int i = 0; i < even.size(); i++)
    {
        cout << even[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < odd.size(); i++)
    {

        cout << odd[i] << " ";
    }

    cout << endl;

    return 0;
}