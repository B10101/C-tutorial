#include <stdio.h>

enum week{
	monday,
	tuesday,
	wednesday,
	thursday,
	friday,
	saturday,
	sunday,
};

int main(){
	enum week weekend1 = sunday;
	enum week weekend2 = saturday;

	printf("Weekend 1: %d", weekend1);
	printf("Weekend 2: %d", weekend2);
	return 0;
}
