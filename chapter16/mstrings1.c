#include <stdio.h>
#include <string.h>
int main()
{
    char list[6][20] = {
        "akshay", "parag", "lucky", "raman", "gopal", "rajesh"
    };
    int i;
    char yourname[20];
    printf("Enter your name: ");
    scanf("%s", yourname);
    for (i=0; i<=5; i++)
    {
        if (strcmp(&list[i][0], yourname) == 0)
        {
            printf("Welcome, you can enter the palace\n");
            return 0;
        }
    }
    printf("Sorry, you are a tresspasser");
    return 0;
}