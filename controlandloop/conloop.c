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
	int week;

	printf("Enter a number between 1 and 2");
	scanf("%d", &week);

	switch (week) {
		case 1:
			printf("Sunday");
			break;
		case 2:
			printf("Monday");
			break;
		default:
			printf("Invalid");
			break;
				
	}

	return 0;
}
