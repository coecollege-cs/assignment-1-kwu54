#include <stdio.h>

int main() {

	printf("The size of int is %lu \n",sizeof(int));
	printf("The size of char is %lu \n",sizeof(char));
	printf("the size of long is %lu \n", sizeof(long));
	printf("the size of double is %lu \n",sizeof(double));
	printf("the size of unsigned char %lu \n",sizeof(unsigned char));
	printf("the size of unsigned long %lu \n",sizeof(unsigned long));
	printf("the size of int* is %lu \n ",sizeof(int*));
	printf("the size of char* is %lu \n", sizeof(char*));
	printf("the size of long* is %lu \n", sizeof(long*));
	return 0;

}
