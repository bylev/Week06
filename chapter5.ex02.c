#include <stdio.h>


float radius;
float volume;
char line_text[50];

const float pi = 3.1416;

int main (){
printf("Enter the radius of the sphere:  ");
fgets(line_text, sizeof(line_text), stdin);
sscanf(line_text, "%f", &radius);


 volume = (4.0/3.0)* pi * (radius * radius * radius);
 printf("The volume of the sphere is:  %f.\n", volume);
 
 return 0;

}
