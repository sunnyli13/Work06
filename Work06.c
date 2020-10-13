#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	// array 1 and array 1 pointer
	int arr1[10];
	int *ap1 = arr1;

	// random generator
	srand(time(NULL));

	// set random values into arr1
	int i;
	for(int i = 0; i < 9; i++)
		arr1[i] = rand();

	// set arr1 last value to 0
	arr1[9] = 0;

	// print arr1
	for(int i = 0; i < 10; i++)
		printf("arr1[%d]: %d\n", i, arr1[i]);
	printf("\n");

	// array 2 and array 2 pointer
	int arr2[10];
	int *ap2 = arr2;

	// set the values in arr2 the values of arr1 in reverse order
	for(int i = 0; i < 10; i++)
		*(ap2+i) = *(ap1+9-i);

	// print arr2
	for(int i = 0; i < 10; i++)
		printf("arr2[%d]: %d\n", i, arr2[i]);
	printf("\n");

	return 0;
}