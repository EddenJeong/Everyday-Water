#include <cs50.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    float x = get_float("x: ");
    float y = get_float("y: ");

    printf("x / y = %f\n", x / y);

    for(int i = 1; ; i *= 2)
    {
        printf("%i\n", i);
        sleep(1);
    }
}
