#include <stdio.h>

int main()

{
    float number;
    scanf("%f",&number);
    if(number>100 || number < 0)
    {
        printf("Fora de intervalo\n");
    }
    else if(number>= 0 && number <= 25)
    {
        printf("Intervalo [0,25]\n");
    }
    else if(number>25 && number <= 50)
    {
        printf("Intervalo (25,50]\n");
    }
    else if(number>50 && number <= 75)
    {
        printf("Intervalo (50,75]\n");
    }
    else if(number>75 && number <= 100)
    {
        printf("Intervalo (75,100]\n");
    }


    return 0;
}
