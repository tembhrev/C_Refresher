#include <stdio.h>
int main()
{
    int dd, mm, yy;
    printf("Enter date in dd/mm/yy or dd.mm.yy or dd-mm-yy format\n");
    printf("%d%*c%d%*c%d", &dd, &mm, &yy);
    printf("%d/%d%/%d\n", dd, mm, yy);
    return 0;
}