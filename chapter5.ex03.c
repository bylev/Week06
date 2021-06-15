#include <stdio.h>
int main() {
float width, height, perimeter;

	printf("Enter the height of the Rectangle : ");
	scanf("%f", &height);
	printf("enter the width of the Rectangle : ");
	scanf("%f", &width);
perimeter = 2.0 * (height + width); /* perimeter = 2 * ( width + height )*/
	printf("Perimeter of the Rectangle is : %f\n", perimeter);
	return 0;
}


