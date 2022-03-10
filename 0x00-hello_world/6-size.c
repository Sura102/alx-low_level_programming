#include<stdio.h>
int main(){
	int intType;
	float floatType;
	long int longInt;
	long long int longlongInt;
	char charType;

	printf("Size of a char: %zu byte\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longInt));
	printf("Size of a long long int: %zu bytes\n", sizeof(longlongInt));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));
	return(0);
}
