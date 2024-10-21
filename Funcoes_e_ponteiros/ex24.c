//Uma universidade deseja converter notas de seus estudantes de uma escala alfabética para uma
// escala numérica de acordo com a seguinte correspondência:
// Nota Valor Numérico
// A 10
// B 8
// C 6
// D 4
// F 0
// Implemente uma função em linguagem C com assinatura int converter_nota(char nota) que
// recebe uma nota alfabética como argumento e retorna a nota equivalente na escala numérica.
// Caso a nota alfabética seja inválida, a função deve retornar -1. Escreva um programa completo
// que leia uma nota alfabética fornecida via teclado, chame a função converter_nota para realizar
// a conversão e imprima a nota equivalente na escala numérica ou uma mensagem de erro caso a
// nota seja inválida.



// A university wants to convert its students' grades from an alphabetical scale to a
// numerical scale according to the following correspondence:
// Note Numerical Value
// At 10
// B 8
// C 6
// D4
// F 0
// Implement a function in C language with signature int convert_note(char note) that
// takes an alphabetical grade as an argument and returns the equivalent grade on the numerical scale.
// If the alphabetical note is invalid, the function must return -1. Write a complete program
// that reads an alphabetical note provided via the keyboard, call the convert_note function to perform
// conversion and print the equivalent note on the numerical scale or an error message if the
// note is invalid





#include <stdio.h> //Calls the standard input output lib
#include <stdlib.h> //Calls the standart system lib
#include <ctype.h> //Calls the library to convert all Char elements to upper


int convert_note(char note) //Calls the convert note function
{
    if (note == 'A') //if statement to verify the student note
    {
        return 10; //Return the new format note based on the student note
    }
    else if (note == 'B') //if statement to verify the student note
    {
        return 8; //Return the new format note based on the student note
    }
    else if (note == 'C') //if statement to verify the student note
    {
        return 6; //Return the new format note based on the student note
    }
    else if (note == 'D') //if statement to verify the student note
    {
        return 4; //Return the new format note based on the student note
    }
    else if (note == 'F') //if statement to verify the student note
    {
        return 0; //Return the new format note based on the student note
    }
    else //If statentment to the situation that the note is invalid 
    {
        return -1;  //Return a value to show it is invalid
    }
}

int main() //Calls the main function
{
    char note; //Delcare the char variables
    int new_format; //Declare the int variables

    printf("Write the students note: \n"); //Calls the user to the program
    scanf("%c", &note); //Insert the information in the correct variable

    new_format = convert_note(toupper(note)); //Call the convert_note function into the main function, to change the format of the note

    if (new_format == -1) //If the note is invalid
    {
        printf("This student note is invalid, try again: \n"); //Tells the user the note send is invalid
        system("ex24.exe"); //Calls the program again
    }
    else //If the note is valid
    {
        printf("New student note is %d. \n", new_format); //Show to the user the new format note
        system("pause"); //Pause the system
    }

    return 0; //Shows the program is working fine
}