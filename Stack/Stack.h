#pragma once
class Stack
{
private:
	int top;
	int size_array;
	double* array;
public:
	void setArray(double* user_arr, int user_size_array);
	double* getArray();

	bool isEmpty();
	bool isFull();

	void puch(double new_item);
	double pop();

	Stack();
	Stack(double* arr, int size_array);
	~Stack();
};

