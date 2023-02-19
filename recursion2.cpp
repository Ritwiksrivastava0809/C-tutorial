#include<iostream>
#include<math.h>
#include <algorithm>

using namespace std;

int power(int n, int p)
{
    if(p==1)
    {
        return 1;
    }

    int prevpower = pow(n,p-1);
    return n*prevpower;

}

// string checkpalindrome(string s) {
    // int j = s.size() - 1;
    // bool flag = false;
    // for (int i = 0 ; i < s.size()/2 ; i++) {
    //     if (s[i] == s[j]){
    //         flag = true;
    //         j--;
    //     }
    //     else{
    //         return false;
    //     }   
    // }
    // return flag;

    // string str = s;
    // auto it = remove_if(str.begin(), str.end(), [](char const &c) {
    //     return !std::isalnum(c);
    // });
    // return str;

//     for(int i=0; i<s.length(); i++)
//     {
//         if(!isalpha(s[i]))
//             s.erase(i);
//     }
//     return s;

// }

// string remove_non_alphanumeric(string s)
// {
//     string result = "";
//     for (char c : s)
//     {
//         if (isalnum(c))
//         {
//             result += c;
//         }
//     }
    
//     return result;
// }

bool checkpalindrome(string s) {
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - 1 - i])
        {
            return false;
        }
    }
    return true;
}
bool isPalindrome(string s) {
        string result = "";
        string new_result = "";
        for (char c : s)
        {
            if (isalnum(c))
            {
                result += c;
            }
        }
        for (char c : result){
            new_result += tolower(c);
        }
        if(new_result == " "){
            return true;
        }
        if(checkpalindrome(new_result)) {
            return true;
        }
        else{
            return false;
        }
}


int main()
{
    // int n,p;
    // cout<<"enter the base number: ";
    // cin>>n;
    // cout<<"enter the raised power: ";
    // cin>>p;

    // cout<<power(n,p)<<endl;
    cout<<checkpalindrome("a");  

    return 0;

}