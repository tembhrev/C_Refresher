#include <stdio.h>
int main()
{
    float bs, gs, da, hra;
    printf("Enter bvasic salary: ");
    scanf("%f", &bs);
    if (bs < 1500)
    {
        hra = bs * 10/100;
        da = bs * 90/100;
    }
    else
    {
        hra = 500;
        da = bs * 98/100;
    }
    gs = bs + hra + da;
    printf("Gross salary=Rs.%f\n", gs);
    return 0;
}