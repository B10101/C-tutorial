#include <stdio.h>

int main(){
	int var;
	double var2;
	char cc;
	printf("Enter a integer: \n");
	scanf("%d", &var);
	printf("the value was, %d \n", var);
	
	printf("Enter a double\n" );
	scanf("%lf", &var2);
	printf("the value was, %lf \n", var2);

	printf("Enter  a character: \n");
	scanf("%c", &cc);
	printf("The value was %c", cc);
	



	return 0;
}

