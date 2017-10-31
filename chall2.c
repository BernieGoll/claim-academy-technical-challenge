#include <stdio.h>

int main(void)
{

int n;
scanf("%d", &n);

{
    if((n % 3 != 0) && (n % 5 != 0))
    {
        printf("Indivisible by both 3 and 5\n");
    }

    if((n % 3 == 0) && (n % 5 == 0))
    {
        printf("Divisible by both 3 and 5\n");
    }

        if((n % 3 == 0) && (n % 5 != 0))
    {
        printf("Divisible by 3\n");
    }

        if((n % 3 != 0) && (n % 5 == 0))
    {
        printf("Divisible by 5\n");
    }

}
}
