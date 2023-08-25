#include <stdio.h>

typedef struct Complex{
	double real;
	double imagine;
}complex;


int main(){
	complex c1 = {.real = 12.22, .imagine = 34.3};
	complex c2 = {.real = 13.22, .imagine = 12.2};
	complex c3 = {.real = 90.32, .imagine = 12.232};
	
	complex diff;
	diff.real = c3.real - c2.real - c1.real;
	diff.imagine = c3.imagine - c2.imagine - c1.imagine;

	printf("the result is %lf %lf", diff.real, diff.imagine);

	return 0;
}
