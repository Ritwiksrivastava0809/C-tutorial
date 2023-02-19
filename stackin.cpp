/* C++ implementation to convert
infix expression to postfix*/

#include<bits/stdc++.h>
using namespace std;

//Function to return precedence of operators
int precedence(char c) {
	if(c == '/' || c=='*')
		return 2;
	else if(c == '+' || c == '-')
		return 1;
	else
		return -1;
}

// The main function to convert infix expression
//to postfix expression
void infixToPostfix(string s) {

	stack<char> st; //For stack operations, we are using C++ built in stack
	string result;
// scanning character
	for(int i = 0; i < s.length(); i++) {
		char c = s[i];

		// If the scanned character is
		// an operand, add it to output string.
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
			result += c;


		//If an operator is scanned
		else {
			while(!st.empty() && precedence(s[i]) <= precedence(st.top())) {  // at beginning operator !st.empty is o , 0 &&with anything is 0 means while loop not execute for first operator
				result += st.top();
				st.pop();
			}
			st.push(c);
		}
	}

	// Pop all the remaining elements from the stack
	while(!st.empty()) {
		result += st.top();
		st.pop();
	}

	cout << result << endl;
}

//Driver program to test above functions
int main() {
	string exp = "4$2*3-3+8/4";
	infixToPostfix(exp);
	return 0;
}
