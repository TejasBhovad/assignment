#include <stdio.h>
int main()
{
    int N, i, tmp, evenFlag = 0, oddFlag = 0;
    printf("Enter N: ");
    scanf("%d", &N);
    printf("\nEnter N Elements: \n");
    int even[N], odd[N], ar[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] % 2 == 0)
        {
            even[evenFlag] = ar[i];
            evenFlag++;
        }
        else if (ar[i] % 2 != 0)
        {
            odd[oddFlag] = ar[i];
            oddFlag++;
        }
    }
    printf("\n");
    printf("Even List:\n");
    for (i = 0; i < evenFlag; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");
    printf("Odd List:\n");
    for (i = 0; i < oddFlag; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\n");
    return 0;
}