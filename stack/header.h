/*********************/
/*Author:Caleb Jewell*/
/*******10/5/18*******/
/******HomeWork3******/
/*********************/

#pragma once
#ifndef STACK_H
#define STACK_H
#include<vector>
using namespace std;

template < typename T>
class Stack {

public:
	Stack(); //constructor
	bool empty() const;
	T peek() const;
	void push(T value);
	T pop();
	int getSize() const;
	vector<T>elements; // replaces the stack array to using a vector
};


// most of the program is just switching from using a stack with an array to a stack using a vector
template < typename T>
Stack<T>::Stack() {

}

template < typename T>
bool Stack<T>::empty() const
{
	return elements.size() == 0;
}

template < typename T>
T Stack<T>::peek() const
{
	if (elements.size() > 0)
	{


		return	elements.at(elements.size() - 1); // retruns last
	}
}

template < typename T>
void Stack<T>::push(T value)
{
	return elements.push_back(value);
}

template < typename T>
	T Stack<T>::pop()
	{
		if (empty()) // checks if the stack is empty 
		{
			return (T)"";
		}
		else {
			T last = peek();

			elements.pop_back();
			return last;
		}
	}
	

template < typename T>
	int Stack<T>::getSize() const
	{
		return elements.size();
	}
#endif
