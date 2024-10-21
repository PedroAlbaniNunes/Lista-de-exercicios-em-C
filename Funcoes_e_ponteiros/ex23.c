#include <stdio.h> //Calls the standard input output lib
#include <stdlib.h> //Calls the standart system lib

int main() //Calls the main function
{
    float salary, raise, new_salary; //Declares the float variables
    int months; //Declare the integer variabels

    printf("Write your salary. \n"); //Calls the user to the program
    scanf("%f", &salary); //Insert the information in the correct variable

    printf("Write how long have you work at the company in months. \n"); //Calls the user to the program
    scanf("%d", &months); //Insert the information in the correct variable

    if ((months >= 60) || (salary >= 5000)) //Asks the program if the salary and the time worked hit the goal
    {
        raise = salary * 0.1; //Calcs the raise 
    }
    else //If the user dont hit the goal 
    {
        raise = salary * 0.05; //Calcs the raise with diferent conditions  
    }

    new_salary = salary + raise; //Calcs the new salary by adding the raise in the old salary

    printf("Your new salary is %.2f. \n", new_salary); //Show the user they new salary
    
    system("pause"); //Pause the system
    return 0; //Show the program is working 
}