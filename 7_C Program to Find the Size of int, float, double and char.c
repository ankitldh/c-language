#include<stdio.h>
int main()
{
	int intType;
	char charType;
	float floatType;
	double doubleType;
	
	printf("size of int: %zu bytes\n",sizeof(intType));
	printf("size of char: %zu bytes\n",sizeof(charType));
	printf("size of float: %zu bytes\n",sizeof(floatType));
	printf("size of double: %zu bytes\n",sizeof(doubleType));
}
