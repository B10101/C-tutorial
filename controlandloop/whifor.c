#include <stdio.h>
#include <stdbool.h>


int main(){
	// while loop
	// for a never ending loop, use while(1)
	// avoid do-while **this is my own recomendation
	// break gets out of the loop
	// continue skips the existing operation but continues the loop
	int k = 0;
	while (k<=5) {
		printf("%d", k);
		k++;
	}

	//for loop
	for (int i=0; i<10;i++) {
		printf("%d\n", i);
	}

	return 0;
}
