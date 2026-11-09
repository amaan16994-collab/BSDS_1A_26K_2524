#include <stdio.h>

double calculateDiscount(char membershipType, double cartValue);
double calculateFinalBill(double discountedAmount);

int main(){
    char membershipType;
    double cartValue;
    printf("Enter membership type (P for Platinum, G for Gold, S for Standard): ");
    scanf(" %c", &membershipType);
    printf("Enter total shopping cart value: ");
    scanf("%lf", &cartValue);
    double discountAmount = calculateDiscount(membershipType, cartValue);
    double discountedAmount = cartValue - discountAmount;

    printf("Original Cart Value: PKR %.2f\n", cartValue);
    printf("Discount Applied:    PKR %.2f\n", discountAmount);
    printf("Discounted Amount:   PKR %.2f\n", discountedAmount);

    double finalPayable = calculateFinalBill(discountedAmount);
    printf("Final Payable Bill:  PKR %.2f\n", finalPayable);
}

double calculateDiscount(char membershipType, double cartValue) 
{
    double discountRate = 0.0;

    if (membershipType == 'P' || membershipType == 'p') {
        discountRate = 0.20;
    } 
    else if (membershipType == 'G' || membershipType == 'g') {
        discountRate = 0.10;
    } 
    else if (membershipType == 'S' || membershipType == 's') {
        discountRate = 0.05;
    }
    if (cartValue > 10000.0) {
        discountRate += 0.02;
    }
    return cartValue * discountRate;
}
double calculateFinalBill(double discountedAmount){
    double salesTax = discountedAmount * 0.15;
    double total = discountedAmount + salesTax;
    if (discountedAmount <= 5000.0) {
        total += 300.0;
        printf("Shipping Charge:     PKR 300.00 (Flat rate applied)\n");
    } else {
        printf("Shipping Charge:     PKR 0.00 \n");
    }
    printf("Sales Tax (15%):     PKR %.2f\n", salesTax);
    return total;
}