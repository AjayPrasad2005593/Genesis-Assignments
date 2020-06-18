#include <stdio.h>
int main()
{
    int n = 5;
    const int* ptr_c;
    ptr_c = &n;
    n = 6;
    printf("n = %d\n", n);
    printf("n = %d\n", *ptr_c);
    return 0;
}
