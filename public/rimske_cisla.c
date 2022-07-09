#include <stdio.h>

int main()
{
    int cislo;

    printf("Napis cele cislo do 100:");
    scanf("%d", &cislo);

    if (cislo > 100)
    {
        printf("\nError!");
        printf("Zadaj mensie cislo!");
    }

    else
    {
        printf("Rimske cislo:");
        for (cislo; cislo > 0;)

            if (cislo >= 100)
            {
                printf("C");
                cislo -= 100;
            }
            else if (cislo >= 90)
            {
                printf("XC");
                cislo -= 90;
            }
            else if (cislo >= 50)
            {
                printf("L");
                cislo -= 50;
            }
            else if (cislo >= 40)
            {
                printf("XL");
                cislo -= 40;
            }
            else if (cislo >= 10)
            {
                printf("X");
                cislo -= 10;
            }
            else if (cislo >= 9)
            {
                printf("IX");
                cislo -= 9;
            }
            else if (cislo >= 5)
            {
                printf("V");
                cislo -= 5;
            }
            else if (cislo >= 4)
            {
                printf("IV");
                cislo -= 4;
            }
            else if (cislo >= 1)
            {
                printf("I");
                cislo -= 1;
            }
    }
    return 0;
}