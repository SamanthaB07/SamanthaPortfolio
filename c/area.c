#include <stdio.h>

int main() {
	int length, width, area;
	printf("Enter length: ");
	scanf("%i", &length);
	printf("Enter width: ");
	scanf("%i", &width);
	area = length*width;
	printf("The area of the rectangle %i\n", area );
	return 0;
}
