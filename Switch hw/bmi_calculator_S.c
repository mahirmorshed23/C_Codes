#include <stdio.h>

#define end "\x1b[0m"
#define red "\x1b[31m"
#define green "\x1b[32m"
#define yellow "\x1b[33m"
#define blue "\x1b[34m"

int main()
{
    float height, weight;
    printf("Height(INCH): ");
    scanf("%f", &height);
    printf("Weight(KG): ");
    scanf("%f", &weight);

    height = height*0.0254;
    float Bmi = (weight/(height*height));
    printf("Your BMI is: %0.1f\n", Bmi);

    float BMI = ((Bmi / 7) + 0.5);
    switch ((int)BMI)
    {
    case 1:
    case 2:
        printf(red"Underweight\n"end);
        break;
    case 3:
        printf(green"Normal weight\n"end);
        break;
    case 4:
    case 5:
        printf(blue"Overweight\n"end);
        break;
    default:
        printf(yellow"Invalid Height or Weight\n"end);
        break;
    }
    return 0;
}