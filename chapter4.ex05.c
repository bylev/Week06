#include <stdio.h>

int main() {


float floatnum;     /* a floating-point number */
int intnum;         /* an integer */
char character;     /* a character */

	floatnum = 1.4;
	intnum = 14;
	character = 'W';

	printf("%f as %%d: %d\n", floatnum, character);
	printf("%d as %%f: %f\n", intnum, floatnum);
	printf("%c as %%d: %d\n", character, character);

	return(0);
}