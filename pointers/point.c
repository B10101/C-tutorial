#include <stdio.h>

void exersise1(){
	int salary;
	scanf("%d", &salary);
	printf("Current salary: %d\n", salary);
	
	int* ptr = &salary;
	int new = * ptr * 2;
	printf("New salary: %d",new );

}

void pointers_with_arrays(){
	//finding the largest value in an array using pointers
	int numbers[5] = {23,32,43,54,34};
	int max = 0;
	for (int i=0; i<5; ++i) {
		if (*(numbers + i)>max) {
			max = *(numbers + i);
		}	
	}
	printf("Max :%d\n", max);
}

int* multiply(int* a, int* b, int* result){
	*result = *a * *b;
	return result;
}


int main(){
	int age = 59;
	// getting the address
	int *ptr = &age;
	printf("The address: %p\n ", ptr);
	printf("The value: %d\n",*ptr );

	int a = 5;
	int b = 4;
	int re;
	int* result = multiply(&a, &b, &re);
	printf("The sum is: %d", *result);

	return 0;
}
