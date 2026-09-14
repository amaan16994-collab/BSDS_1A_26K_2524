#include <stdio.h>

int main() {
	char name[100];
	printf("Please enter your full name: ");
	scanf("%[^\n]"	, &name);
	printf("\n\nHello,\n");
	printf(" \n%s", name);
	return 0;
}	


