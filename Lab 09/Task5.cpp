#include <stdio.h>

void printSensorData(void *ptr, char type) {
    if (type == 'f') {
        printf("Temperature: %.2f C\n", *(float *)ptr);
    } else if (type == 'i') {
        if (*(int *)ptr == 1) {
            printf("Motion Detected\n");
        } else {
            printf("No Motion\n");
        }
    } else if (type == 'c') {
        if (*(char *)ptr == 'O') {
            printf("Door Open\n");
        } else if (*(char *)ptr == 'C') {
            printf("Door Closed\n");
        }
    }
}

int main() {
    float temp = 36.6;
    int motion = 1;
    char door = 'O';

    printSensorData(&temp, 'f');
    printSensorData(&motion, 'i');
    printSensorData(&door, 'c');

    return 0;
}