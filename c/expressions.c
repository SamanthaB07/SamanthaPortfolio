#include <stdio.h>

int main() { 
	int a, b;
	char c;

	a = 10;
	b = 20;

	scanf("%c", &c);
	
	if( a < b ) {
		printf("a > b = %i\n", a > b);
}
	if(c >= 'a' && c<= 'z' ) {	// And expression with &&
		printf("c is lowercase\n");
	}


	return 0;
}
