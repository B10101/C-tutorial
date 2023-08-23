#include <stdio.h>
#include <stdlib.h>

int main(){
	// for integers, 4bytes, use %d for printing
	// for floats,  4bytes, use %f for printing
	// for doubles, 4bytes, use %lf for printing
	// for char, 4bytes, use %c for printing

	// int variables
	int var1 = 12;
	// multiple variables at once
	int var2, var3;
	var2 = 2;
	var3 = 6;
	printf("the values are: %d, %d, %d \n",var1, var2, var3);
	
	// float variables
	float var4 = 11.1;
	// multiple float
	float var5, var6;
	var5 = 4.99;
	var6 = 7.865;

	printf("%f, %f, %f \n", var5, var6, var4);
	
	//double
	double var7 = 12.1213e7;
	printf("%lf \n",var7);
	
	//character
	char var8 = 'C';
	printf("%c \n",var8);
	// printing its stored form
	printf("This is hw it is stored, %d", var8);

	return 0;
}
