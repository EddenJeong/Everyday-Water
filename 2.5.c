#include <cs50.h>
#include <stdio.h>

void cough(int n);
int get_positive_int(void);

int main(void)
{
    cough(3);
    int i = get_positive_int();
    printf("%i\n", i);
}


void cough(int n)
{
    for(int i = 0; i < 3; i++)
    printf("cough\n");
}

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Positive integer: ");
    }
    while (n < 1);
    return n;
}
