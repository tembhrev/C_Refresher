#include <stdio.h>
int main()
{
    struct book
    {
        char name; float price; int pages;
    };
    struct book b1 = {'B', 130.00, 550};
    printf("address of name = %u\n", &b1.name);
    printf("address of name = %u\n", &b1.price);
    printf("address of name = %u\n", &b1.pages);
    return 0;
}