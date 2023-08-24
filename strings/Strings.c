#include <stdio.h>

int main(){
	// declaring string as an array
	//
	char name[20];
	fgets(name, sizeof(name), stdin);
	printf("%s ",name );

	return 0;
}
