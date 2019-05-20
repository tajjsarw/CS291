//
//  main.cpp
//  BalancingSymbols
//
//  Created by Thitima Srivatanakul on 9/14/18.
//  Copyright © 2018 Thitima Srivatanakul. All rights reserved.
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(string expr) {
	stack<char> myStack;
	char temp;


	for (int i = 0; i < expr.length(); i++) {
if (expr[i] == '{' || expr[i] == '(' || expr[i] == '[')
		{
			myStack.push(expr[i]);
		}
		if (expr[i] == '}' || expr[i] == ')' || expr[i] == ']')
		{
			if (myStack.empty()) return false;

			if (expr[i] == '}')
			{
				temp = myStack.top();
				myStack.pop();
				if (temp != '{') return false;
			}
			else if (expr[i] == ')')
			{
				temp = myStack.top();
				myStack.pop();
				if (temp != '(') return false;
			}
			else if (expr[i] == ']')
			{
				temp = myStack.top();
				myStack.pop();
				if (temp != '[') return false;
			}
		}


	}	
	return (myStack.empty());
		return false;//remove later


}

int main(int argc, const char * argv[]) {

	string expression;
	while (expression != "end") {
		cout << "Please enter an expression that you want to evaluate: " << endl;
		cin >> expression;


		cout << "Your expression: " << expression << " is : " << (isBalanced(expression) ? "balanced!" : "not balanced!") << endl << endl;

	}
	system("pause");
	return 0;
}
