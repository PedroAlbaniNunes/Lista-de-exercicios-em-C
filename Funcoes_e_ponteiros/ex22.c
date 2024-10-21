#include <stdio.h> // Include the Input and Output library
#include <stdlib.h> // Include the System library

int bigger2(int a, int b) // Start of the function that choose the bigger number between two numbers
{
    if (a >= b) // If statement to choose between the numbers
        return a; // Return the a value if its the bigger
    return b;  // If not, returns the b value
}


int bigger3(int a, int b, int c) // Start of the function that choose the bigger number between three numbers
{
    if (bigger2(a, b) >= c) // Selects the bigger between the first two numbers and compares with the third
        return bigger2(a,b); // Returns the first function if its bigger
    return c; // If not, returns the c value
}

int main() // Start the main function
{
    int a, b, c, maior; // Declaration of the variables 

    printf("Write the value of A: \n"); // Calls the user to write the values
    scanf("%d", &a); // Put the value in the correct memory spot 
    printf("Write the value of B: \n"); // Calls the user to write the values
    scanf("%d", &b); // Put the value in the correct memory spot
    printf("Write the value of C: \n"); // Calls the user to write the values
    scanf("%d", &c); // Put the value in the correct memory spot

    maior = bigger3(a, b, c); // Variable to show the bigger between the three

    printf("The bigger is %d. \n", maior); // Shows the user the bigger between three numbers

    system("pause"); // Pause the CMD
    return 0; // Shows the function is working
}