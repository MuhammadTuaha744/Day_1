/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

// Define a structure for a car
struct Car {
    char name[50];
    char brand[50];
    int year;
    double price;
};

// Function to initialize and return a Car object based on the name
void getCarAttributes(const char *carName, struct Car *car) {
    if (strcmp(carName, "Corolla") == 0) {
        strcpy(car->name, "Corolla");
        strcpy(car->brand, "Toyota");
        car->year = 2022;
        car->price = 2500000.0;
    } else if (strcmp(carName, "Sonata") == 0) {
        strcpy(car->name, "Sonata");
        strcpy(car->brand, "Hyndai");
        car->year = 2023;
        car->price = 1200000.0;
    } else if (strcmp(carName, "Sportage") == 0) {
        strcpy(car->name, "Sportage");
        strcpy(car->brand, "Kia");
        car->year = 2022;
        car->price = 5500000.0;
    } else {
        strcpy(car->name, "Unknown");
        strcpy(car->brand, "Unknown");
        car->year = 0;
        car->price = 0.0;
    }
}

int main() {
    struct Car car;
    char userInput[50];

    // Prompt user for car name
    printf("Enter the name of a car (Corolla, Sonata, Sportage): ");
    fgets(userInput, sizeof(userInput), stdin);
    userInput[strcspn(userInput, "\n")] = '\0';  // Remove newline character from input

    // Get car attributes based on user input
    getCarAttributes(userInput, &car);

    // Output the attributes of the selected car
    printf("\nCar Name: %s\n", car.name);
    printf("Brand: %s\n", car.brand);
    printf("Year: %d\n", car.year);
    printf("Price: %.2f\n", car.price);

    return 0;
}
