#include <stdio.h>

int main(void)
{

int n;
scanf("%d", &n);

{
    if((n % 3 != 0) && (n % 5 != 0))
    {
        printf("Indivisible, with Liberty and Justice for All\n");
    }

    if((n % 3 == 0) && (n % 5 == 0))
    {
        printf("Divisible by both three and five\n");
    }

        if((n % 3 == 0) && (n % 5 != 0))
    {
        printf("Divisible by three\n");
    }

        if((n % 3 != 0) && (n % 5 == 0))
    {
        printf("Divisible by five\n");
    }

}
}
