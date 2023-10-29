#include<stdio.h>
#include<math.h>

int main ()

{
    int x, y;
    printf ("---------------------------------\n"); // Dashes
    printf ("|     Temperature Converter     |\n"); // Title
    printf ("---------------------------------\n"); // Dashes


    printf("\n"); // New Line Gap

    printf("Choose one from below: \n"); // Title
    printf("1. Celsius to Fahrenheit\n"); // Operations List that this converter can perform
    printf("2. Fahrenheit to Celsius\n"); // Operations List that this converter can perform

    printf("\n"); // New Line Gap

    printf("-> "); // Answer input placeholder
    scanf("%d", &y); // Memory address location

    if(y==1) // Celsius to Fahrenheit
    {
        printf("\n");

        printf("---------------------------\n");
        printf("|  Celsius to Fahrenheit  |\n");
        printf("---------------------------\n");

        printf("\n");

        printf("-> ");
        scanf("%d",&x);

        float formula = (x * 1.8) + 32; // formula or main function

        printf("\n");

        printf("%d degree Celsius in Fahrenheit is %f degree Fahrenheit\n",x,formula);

        printf("\n");
    }

    else if(y==2) // Fahrenheit to Celsius
    {
        printf("\n");

        printf("---------------------------\n");
        printf("|  Fahrenheit to Celsius  |\n");
        printf("---------------------------\n");

        printf("\n");

        printf("-> ");
        scanf("%d",&x);

        float formula = (x - 32) * 0.555; // formula or main function

        printf("\n");

        printf("%d degree Fahrenheit in Celsius is %f degree Fahrenheit\n",x,formula);

        printf("\n");
    }

    else
        printf("The number you entered is not assigned with any Conversions. Enter a valid number!"); // error message code
}
