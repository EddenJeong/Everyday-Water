// Buggy exmple for printf and debug50

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        printf("i is now %i: ", i);
        printf("#\n");
    }
}
