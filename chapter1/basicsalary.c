#include <stdio.h>
int main()
{
    float bp, da, hra, grpay;
    printf("\nEnter basic salary of Ramesh:");
    scanf("%f", &bp);
    da = 0.4 * bp;
    hra = 0.2 * bp;
    grpay = bp + da +hra;
    printf("Basic salary of Ramesh=%f\n", bp);
    printf("Dearness Allowance=%f\n", da);
    printf("House Rent Allownace=%f\n", hra);
    printf("Gross Pay of Ramesh=%f\n", grpay);
    return 0;
}