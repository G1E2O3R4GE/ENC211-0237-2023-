#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celcius;
    float fahrenheit;
    float start;
    float end;
    float increment;
    printf("starting fahrenheit value\n");
    scanf("%f",&start);
     printf("ending fahrenheit value\n");
    scanf("%f",&end);
     printf("increment value\n");
    scanf("%f",&increment);

    printf("temperature conversation table\n ");
    for(fahrenheit=start; fahrenheit<=end;fahrenheit+=increment)
    {
        celcius = (fahrenheit - 32) * 5.0 / 9.0;
        printf("%6.2f\t%6.2f\n",fahrenheit, celcius);

    }

    return 0;
}
