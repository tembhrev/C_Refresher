#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    struct emp
    {
        char name[40]; int age; float bs;
    };
    struct emp e;
    char ch = 'Y';
    fp = fopen("EMPLOYEE.DAT", "w");
    while (ch == 'Y')
    {
        printf("Enter name, age, salary: ");
        scanf(" %s %d %f", &e.name, &e.age, &e.bs);
        fprintf(fp, " %s %d %f\n", e.name, e.age, e.bs);
        printf("Another record: ");
        fflush(stdin);
        ch = fgetchar();
    }
    fclose(fp);
    fp = fopen("EMPLOYEE.DAT", "r");
    while(fscanf(fp, "%s %d %f", &e.name, &e.age, &e.bs) != EOF)
        printf("%s %d %f\n", e.name, e.age, e.bs);
    fclose(fp);

    ch = 'Y';
    fp = fopen("EMP.DAT", "wb");
    while (ch == 'Y')
    {
        printf("Enter name, age, salary: ");
        scanf(" %s %d %f", &e.name, &e.age, &e.bs);
        fwrite(&e, sizeof(e), 1, fp);
        printf("Another record: ");
        fflush(stdin);
        ch = fgetchar();
    }
    fclose(fp);
    fp = fopen("EMP.DAT", "rb");
    while (fread(&e, sizeof(e), 1,fp) == 1)
        printf("%s %d %f\n", e.name, e.age, e.bs);
    fclose(fp);
    return 0;
}