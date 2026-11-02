#include <stdio.h>
#include <limits.h>

void size_check()
{

    printf("short size : %d\n", sizeof(short));
    printf("Int size : %i\n", sizeof(int));
    printf("long size : %d\n", sizeof(long));
    printf("Float size : %d\n", sizeof(float));
    printf("double size : %d\n", sizeof(double));
    printf("Character size : %d\n", sizeof(char));
}
void max_limit()
{

    printf("Max int: %d Min int: %d\n", INT_MAX, INT_MIN);

    printf("Max long: %ld Min long: %ld\n", LONG_MAX, LONG_MIN);
}
int main()
{
    size_check();
    max_limit();
    return 0;
}
