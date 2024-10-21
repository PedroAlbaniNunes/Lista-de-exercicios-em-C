#include <stdio.h> // Include the Input and Output library
#include <stdlib.h> // Include the System library


int square(int x) // Start of the power function
{
    x *= x; // Take the value and power him by 2

    return x; // Return the value
}

int main() // Start of the main function
{
    int x; // Declaration of the element

    printf("Write the value you want to find the Power of 2: \n"); // Call the user to write an value
    scanf("%d", &x); // Put the value in the correct memory spot
 
    
    printf("The value is %d. \n", square(x)); // Show to the user the result of the power

    system("pause"); // Pause the CMD
    return 0; // Shows the function is working
}