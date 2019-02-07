#include <iostream>

int main()
{
	//please, allocate for me 8 bytes of memory:
	char* buffer = new char[8]; // points to the first byte of an array
	memset(buffer, 6, 8);//sets every of 8 bytes to 6, beginning from byte which pointer buffer points to.

	delete buffer;
}