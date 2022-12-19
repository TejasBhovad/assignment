#include <stdio.h>
void printArray(int ar_1[], int n, int identity)
{
    printf("Array %d Value: \n", identity);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar_1[i]);
    }
    printf("\n");
}
void SortArray(int ar_1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ar_1[i] < ar_1[j])
            {
                int tmp = ar_1[j];
                ar_1[j] = ar_1[i];
                ar_1[i] = tmp;
            }
        }
    }
}
void mergeArray(int ar_1[], int ar_2[], int *result)
{
    for (int i = 0; i < 8; i++)
    {
        result[i] = ar_1[i];
    }
    int i = 0;
    for (int j = 8; j < 15; j++)
    {
        result[j] = ar_2[i];
        i++;
    }
}
int main()
{
    int ar_3[15];
    int ar_1[8] = {1, 5, 2, 9, 4, 5, 6, 3};
    int ar_2[7] = {3, 1, 5, 6, 9, 3, 4};
    printArray(ar_1, 8, 1);
    printArray(ar_2, 7, 2);
    SortArray(ar_1, 8);
    SortArray(ar_2, 7);
    printf("\nAfter Sort:\n");
    printArray(ar_1, 8, 1);
    printArray(ar_2, 7, 2);
    mergeArray(ar_1, ar_2, ar_3);
    printf("\nMerged Array:\n");
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", ar_3[i]);
    }
    printf("\n");
    return 0;
}