
#include <stdio.h>

int main()
{
    int x;
    x = 10;
    int* y;
    y = &x;
    
    printf(" x: %d\n", x);
    printf(" y: %p\n", y);
    printf(" x: %d\n", *y);
    printf(" x: %p\n", &x);

    return 0;
}