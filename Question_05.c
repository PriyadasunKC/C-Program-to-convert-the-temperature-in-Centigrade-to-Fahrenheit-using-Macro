#include <stdio.h>
#define convertTemp(tempInCentigrade) tempInCentigrade * (9.0 / 5.0) + 32
int temperatureConvert();
int main()
{
    temperatureConvert();
    return 0;
}

int temperatureConvert()
{

    float tempInCentigrade = 0.0;

    printf("Enter Temperature in Centigrade : ");
    scanf("%f", &tempInCentigrade);
    printf("Temperature in Fahrenheit : %f", convertTemp(tempInCentigrade));
    return 0;
}