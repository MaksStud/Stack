#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "doctest/doctest.h"
#include "Stack.h"
#include <stack>

using namespace std;

double testMyStack(int num) {
	Stack my_stack;
	my_stack.puch(num);
	return my_stack.pop();
}

TEST_CASE("testing my stack") {
	CHECK(testMyStack(1) == 1);
	CHECK(testMyStack(16) == 16);
	CHECK(testMyStack(-100) == -100);
}

int testSteckSTL(int num) {
	stack<int> stack;
	stack.push(num);
	int a = stack.top();
	return a;
}

TEST_CASE("testing stack STL") {
	CHECK(testSteckSTL(21) == 21);
	CHECK(testSteckSTL(-1) == -1);
	CHECK(testSteckSTL(5) == 5);
}
