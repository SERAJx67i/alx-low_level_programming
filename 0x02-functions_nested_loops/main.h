#ifndef EXAMPLE_H   // Header guard to prevent multiple inclusions
#define EXAMPLE_H

// Constant definitions
#define PI 3.14159
#define MAX_VALUE 100

// Function prototypes
int c(char*)
int add(int a, int b);
double calculateCircleArea(double radius);
void printMessage(const char* message);
int factorial(int n);
bool isPrime(int num);

// Type definitions (typedef)
typedef struct {
    int x;
    int y;
} Point;

#endif // End of header guard

