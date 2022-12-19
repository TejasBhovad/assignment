#include <stdio.h>
void referenceValue(int *m, int *n)
{
    int tmp;
    tmp = *m;
    *m = *n;
    *n = tmp;
    printf("\nAfter Call by Reference Swap:\n");
    printf("A: %d\nB: %d", *m, *n);
}
int main()
{
    int a, b;
    printf("Value of A:");
    scanf("%d", &a);
    printf("Value of B:");
    scanf("%d", &b);
    printf("\nBefore Call by Reference Swap:\n");
    printf("A: %d\nB: %d", a, b);
    referenceValue(&a, &b);
    printf("\n");
}