#include <stdio.h> //Library of I/O stream

#define Pi 3.141592 //This is a macro, it's like a goblal variable where "Pi" has the value 3.141592

int a = 5; //This is a global variable, 

int main()
{
    int b = 10; //This is a local variable, only the function "main()" has access to it
    int sum;

    float sum1 = 0; // Is convenient asign values at the time that we create a variable, so that the space of the variable is not "garbage"

    sum = Pi + a;

    sum1 = Pi + b;

    char string[] = "World";
    char name[15];
    char full_name[30];

    //printf to print on screen, is necessary indicate the type of data that we need to print along with the next
    // "\n" is the line break, like endl on C++
    printf("Hello %s \n", string);// %s ---> char
    printf("The sum is: %i \n", sum);// %i ---> int
    printf("The sum is: %f \n", sum1);// %f ---> float
    printf("The sum is: %.3f \n", sum1);// %.2f ---> print only 2 decimals

    printf("%s %i %f", string, sum, sum1);

    printf("\nWrite your name: ");
    scanf("%s", name); // scanf only read the keyboard enter until a space is found, to read for example "name surname" is need gets()
    printf("Your name is %s\n", name);

    printf("Write your full name: ");
    getchar();// We use getchar to read the buffer, and allow fgets() to read the user Input and write that on
    //also we can use fflush(stdin);
    /* The use of gets() in a program is unsafe, e.g. the user can enter a larger amount than the space avaliable for the variable
    and the program will crash, for that reason is better fgets(variable, size, how the data is obtain)*/
    fgets(full_name, 30, stdin); 
    printf("Your full name is %s\n", full_name);

//more info for the format of printf http://www.it.uc3m.es/pbasanta/asng/course_notes/input_output_printf_es.html
    return 0;
}