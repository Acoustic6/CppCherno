#include <iostream>

int main()
{
	char num = 6;
	char* p = &num;//0x00EFFCFF
	char** pp = &p;//0x00EFFCF0
	//p's value is 0x00EFFCFF. p stores 6(char). p's type is char* (char + *).
	//*p == 6
	//pp's value is &p == 0x00EFFCF0. it stores pointer p(char*). pp's type is char** (char* + *).

	std::cin.get();
}