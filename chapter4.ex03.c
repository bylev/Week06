#include <stdio.h>
int width;
int height;

int area;
int perimeter; 
 
int main () {
height= 2; 
width= 6;

perimeter= 2*(height + width);
printf("Perimeter of the rectangle is = %d inches\n", perimeter);

area= height * width;
printf("Area of the rectangle is = %d inches\n", area);

printf("We have to change the values of height and width and to make that the program let you enter the new values");
return 0;


}