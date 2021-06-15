#include <stdio.h>
int hours; 
int minutes;         
int totalmins;       

const int MINPERHOUR = 60;     

char line_text[50];     

int main() {
	printf("Enter the number of minutes: ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%d", &totalmins);

	hours = (totalmins / MINPERHOUR);
	minutes = (totalmins % MINPERHOUR);

	printf("%d Hours, %d Minutes.\n", hours, minutes);

	return(0);
}