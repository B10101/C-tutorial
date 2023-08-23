#include <stdio.h>
#include <stdbool.h>


int main(){
	int age = 15;

	// if - else
	if (age >= 18) {
		printf("You are allowed to go \n");
	}
	else {
		printf("Not allowed \n");
	}

	// if - else if - else
	
	if (age >=65) {
		printf("retire \n");
	}
	else if (age>=18) {
		printf("work \n");
	}
	else {
		printf("study \n");
	}

	// tenary
	(age>18)? printf("you can vote"): printf("you cannot vote \n");
	char operator = '+';
	int result = (operator == '+')? (age + 12): (age - 12);
	printf("%d \n", result);


	//switch statements
	

	return 0;
}
