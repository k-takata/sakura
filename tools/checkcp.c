#include <stdio.h>
#include <windows.h>

int main()
{
	printf("ACP: %u\n", GetACP());
	printf("ConsoleCP: %u\n", GetConsoleCP());
	return 0;
}
