#include <stdio.h>
int main() {
	char name[100];
	int quantity;
	float price;
	
	printf("Enter product name: ");
	scanf("%[^\n]", &name);
	printf("Enter the quantity: ");
	scanf("%d", &quantity);
	getchar();
	printf("Enter the price: ");
	scanf("%f", &price);
	
	printf("\nProduct Name: %s\n", &name);
	printf("Quantity: %d\n", quantity);
	printf("Price: %.2f", price);
	
	return 0;
}
