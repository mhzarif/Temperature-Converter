#include<stdio.h>
#include<math.h>

int main ()

{
    int x, y;

    printf("Choose one from below: \n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");

    printf("\n");

    printf("-> ");
    scanf("%d", &y);
    if(y==1)
    {

        printf("\n");

        printf("Enter your celsius degree ");
        printf(">> ");
        scanf("%d",&x);

        float formula = (x * 1.8) + 32;

        printf("\n");

        printf("%d degree celsius in fahrenheit is %f degree fahrenheit\n",x,formula);

        printf("\n");
    }

    else if(y==2)
    {

        printf("\n");

        printf("Enter your fahrenheit degree ");
        printf(">> ");
        scanf("%d",&x);

        float formula = (x - 32) * 0.555;

        printf("\n");

        printf("%d degree fahrenheit in celsius is %f degree fahrenheit\n",x,formula);

        printf("\n");
    }

    else
        printf("\n");
        printf("The number you entered is not assigned with any Conversions. Enter a valid number!");
        printf("\n");
}
