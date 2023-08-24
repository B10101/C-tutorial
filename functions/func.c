#include <stdio.h>
#include <stdbool.h>

// suppose there is no return type, use void. otherwise use the return type
// when the function is below main, add a function literal

//with no return type
//
void hello(){
	printf("I am a function.\n");
}
// with an integer return

int multiply(int a1, int a2){
	return a1 * a2;
}
int square(int a);
int main(){
	hello();
	int l = multiply(1, 3);
	printf("%d\n", l);
	int a = square(4);
	printf("%d\n",a);
	return 0;
}

int square(int a){
	return a * a;
}
