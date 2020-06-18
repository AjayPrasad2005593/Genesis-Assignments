#include <stdio.h>
int main()
{
    int a;
    int * const cptr = &a;
    *cptr = 5;
    printf("a = %d\n", a);
    printf("a = %d\n", *cptr);
    return 0;
}
