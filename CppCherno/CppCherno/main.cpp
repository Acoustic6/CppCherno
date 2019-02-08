#include <iostream>

int main()
{
	int a = 5;
	int* b = &a;
	int& ref = a;
	ref = 2; // a now == 2
}