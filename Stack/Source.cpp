#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	int size = 6;
	double* arr = new double[size];
	Stack a(arr, size);
	a.puch(1);
	cout << a.pop() << endl;
	cout << a.isEmpty();
}