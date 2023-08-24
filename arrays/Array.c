#include <stdio.h>
#include <stdbool.h>
int main(){
	// creating
	int Arr[6] = {1,2,3,4,3,2};
	// finding length
	int k = sizeof(Arr)/sizeof(Arr[0]);	
	//  Accessing Values
	for (int i = 0; i<k; ++i) {
		printf("%d \n", Arr[i]);
	}

	return 0;
}


