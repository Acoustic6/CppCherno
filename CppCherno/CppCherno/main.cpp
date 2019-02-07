#include <iostream>

// function declaration. compiler believes Log exists until linker comes in.
// if such function will not be found than linker error will appear.
// Ctrl + F7 - with no linker. Ctrl + F5 - with linker.

void Log(const char* message); 

int main()
{
	Log("Hello World!");
	std::cin.get();
}
