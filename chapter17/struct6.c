#include <stdio.h>
int main()
{
    struct address
    {
        char phone[15]; char city[25]; int pin;
    };
    struct emp
    {
        char name[25]; struct address a;
    };
    struct emp e = {"jeru", "2531046", "nagpur", 10};
    printf("name = %s phone = %s\n", e.name, e.a.phone);
    printf("city = %s pin = %d\n", e.a.city, e.a.pin);
    return 0;
}