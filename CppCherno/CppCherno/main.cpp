#include <iostream>

void Increment(int a)
{
	//a's adress is now 0x001CF74C. new variable in new adress.
	a++;
}

void IncrementByPointer(int* b)
{
	(*b)++;// to increment b we passed here we may pass b's memory adress.
}

void IncrementUsingRef(int& c)
{
	c++;//nost propper way to increment is passing argument by ref.
}

int main()
{
	int a = 5;// adress: 0x001CF82C
	Increment(a);//a will no be incremented here

	int b = 5;
	IncrementByPointer(&b);

	int c = 5;
	IncrementUsingRef(c);
}