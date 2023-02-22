#include <iostream>
#include "Stack.h"

using namespace std;

void Stack::setArray(double* user_arr, int user_size_array)
{
	array = user_arr;
	size_array = user_size_array;
}

double* Stack::getArray()
{
	return array;
}

bool Stack::isEmpty()
{
	return top == 0;
}

bool Stack::isFull()
{
	return top == size_array;
}

void Stack::puch(double new_item)
{
	if (isFull())
	{
		cout << "Stack is full" << endl;
	}
	else
	{
		array[top] = new_item;
		top++;
	}
}

double Stack::pop()
{
	if (!isEmpty()) {
		top--;
		return array[top];
	}
	else
	{
		cout << "Stack is empty " << endl;
	}
}


Stack::Stack()
{
	top = 0;
	size_array = 10;
	array = new double[size_array];
}

Stack::Stack(double* user_arr, int user_size_array)
{
	array = user_arr;
	size_array = user_size_array;
}

Stack::~Stack()
{
	cout << "Del" << endl;
}
