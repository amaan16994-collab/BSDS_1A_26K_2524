#include <stdio.h>

int main() {
    char name[50];
    char city[50];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar(); 

    printf("Enter your city: ");
    fgets(city, sizeof(city), stdin);

    

    printf(" Name : %s", name);
    printf(" Age  : %d years old\n", age);
    printf(" City : %s", city);

    return 0;
}
