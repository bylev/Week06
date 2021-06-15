#include <stdio.h>
int main() {


int hours;
int minutes;
int totalmins;


const int MINPERHOUR= 60;

char line_text[50];

printf("Enter number of hours: ");
fgets(line_text, sizeof(line_text), stdin);
sscanf(line_text, "%d", &hours);

printf("Enter number of minutes:");
fgets(line_text, sizeof(line_text),stdin);
sscanf(line_text, "%d", &minutes);

totalmins = minutes +(hours*MINPERHOUR);

printf("Total of minutes: %d\n", totalmins);

return 0;
}