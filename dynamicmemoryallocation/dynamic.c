#include <stdio.h>
#include <stdlib.h>

int main(){
	int n = 4;
	int* ptr;
	// Allocate memory using malloc
	ptr = (int*)malloc(n * sizeof(int));
	if (ptr == NULL) {
		printf("Error Allocating memory");
		return 0;
	}
	// get values
	for (int i = 0; i < n; ++i) {
		printf("\nEnter value %d: ", i);
		scanf("%d", ptr + i);
	}
	//print values
	for (int i = 0; i<n; ++i) {
		printf("%d\n",*(ptr+i) );	
	}

	//re-allocating using realloc
	n = 6;
	ptr = (int*)realloc(ptr, n * sizeof(int));
	if (ptr == NULL) {
        printf("Error Reallocating memory");
        return 0; 
	}
	for (int i = 0; i < n; ++i) {
		printf("%d\n", *(ptr + i));
	}
	free(ptr);
	return 0;
}
