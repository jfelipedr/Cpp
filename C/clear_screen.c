#include <stdio.h>
#include <stdlib.h>

int main()
{
    char key;

    printf("\n------------------------------------------------");
    printf("\n------------------------------------------------\n");
    printf("----------- Program for clear screen -----------");
    printf("\n------------------------------------------------");
    printf("\n------------------------------------------------\n");

    printf("\nType 'C' to clear the screen: ");
    scanf("%c", &key);

    if (key == 'c' || key == 'C')
    {
        system("cls");
        puts("You have cleaned your screen :D "); //Use puts() to print inside an if statement, but not 100% necessary
    }
    else
        puts("You have not cleaned your screen :( ");

    return 0;
}
