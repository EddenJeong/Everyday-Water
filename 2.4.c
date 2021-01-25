#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("What's your age?\n");
    printf("You are at least %i days old.\n", age * 365);

    float price = get_float("What's the price?\n");
    printf("Your total is %.2f.\n", price * 1.0625);

    int n = get_int("n: ");
    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else if (n % 2 == 1)
    {
        printf("odd\n");
    }
}
