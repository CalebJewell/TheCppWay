#include<string>
#include<iostream>
#include "header.h"
using namespace std;


int main() {

	cout << "Caleb Jewell" << endl;
	
	Stack<string>stringStack; //creating a new stack class of type string. 

	//push these strings onto the stack
	stringStack.push("Cat");
	stringStack.push("Bird");
	stringStack.push("Dog");

	if (stringStack.empty()) {
		cout << stringStack.empty() << endl;
	}

	// calling the pop, getSize and peek function
	cout << stringStack.pop() << endl;
	cout << stringStack.getSize() << endl;
	cout << stringStack.peek() << endl;

	return 0;
}
