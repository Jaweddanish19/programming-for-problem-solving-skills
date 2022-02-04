#include <stdio.h>
#include <conio.h>

void main()
{
    int Ram, Shyam, Ajay;
    printf("enter the age of Ram: ");
    scanf("%d", &Ram);
    printf("enter the age of Shyam: ");
    scanf("%d", &Shyam);
    printf("enter the age of Ajay: ");
    scanf("%d", &Ajay);

    if (Ram < Shyam)
    {
        if (Ram < Ajay)
        {
            printf("Ram is youngest");
        }
    }

    else if (Shyam < Ram)
    {
        if (Shyam < Ajay)
        {
            printf("Shyam is youngest");
        }
    }

    else if (Ajay < Ram)
    {
        if (Ajay < Shyam)
        {
            printf("Ajay is youngest");
        }
    }
}