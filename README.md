## Programs

1. #### Write a program to count blank spaces, digits, vowels and consonants in the string (do not use string header file)

```c
#include <stdio.h>
int main()
{
    char name[30];
    int i, blankFlag = 0, digitFlag = 0, vowelFlag = 0, consonantFlag = 0;
    printf("\nEnter String: ");
    scanf("%[^\n]s", name);
    // Length of String
    for (i = 0; name[i] != '\0'; ++i)
        ;
    int n = i;
    for (i = 0; i < n; i++)
    {
        if (name[i] == ' ')
        {
            blankFlag++;
        }
        else if (name[i] == '1' || name[i] == '2' || name[i] == '3' || name[i] == '4' || name[i] == '5' || name[i] == '6' || name[i] == '7' || name[i] == '8' || name[i] == '9' || name[i] == '0')
        {
            digitFlag++;
        }
        else if ((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z'))
        {
            if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
            {
                vowelFlag++;
            }
            else
            {
                consonantFlag++;
            }
        }
    }
    printf("\nNo of Blanks Spaces: %d", blankFlag);
    printf("\nNo of Vowels: %d", vowelFlag);
    printf("\nNo of Consonants: %d", consonantFlag);
    printf("\nNo of Digits: %d", digitFlag);
    printf("\n");

    return 0;
}
```

2. #### Write a program to accept an Array A with n elements and separate it into two different arrays and C in such a way that B contains Odd numbers and C contains Even numbers.

```c
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
```

3. #### Write a program that creates two integer arrays of size 8 and 7. Initialize the arrays with random values. Sort the arrays in ascending order with the help of a user defined function...

```c
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
    printf("Before Sort:\n");
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
```

4. #### Define a structure "Hockey" consisting of following ...

```c
#include <stdio.h>
struct player
{
    char name[30];
    char country[30];
    int goals;
    int matches;
};

int main()
{
    struct player ply[10];
    int n;
    printf("\nEnter the number of players: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nplayer %d:- ", i + 1);
        printf("\nEnter the name of player: ");
        scanf(" %[^\n]s", ply[i].name);
        printf("Enter the Country of player: ");
        scanf(" %[^\n]s", ply[i].country);
        printf("Enter the Goals of player: ");
        scanf(" %d", &ply[i].goals);
        printf("Enter the Matches of player: ");
        scanf("%d", &ply[i].matches);
    }
    printf("\nAccording to name :");
    for (int i = 0; i < n; i++)
    {
        printf("\nPlayer %d: %s", i + 1, ply[i].name);
    }
    printf("\nAccording to country :");
    for (int i = 0; i < n; i++)
    {
        printf("\nPlayer %d: %s", i + 1, ply[i].country);
    }
    printf("\nAccording to Matches :");
    for (int i = 0; i < n; i++)
    {
        printf("\nPlayer %d: %d", i + 1, ply[i].matches);
    }
    printf("\nAccording to Goals :");
    for (int i = 0; i < n; i++)
    {
        printf("\nPlayer %d: %d", i + 1, ply[i].goals);
    }
    printf("\n");
}
```

5. #### Call by value and call by reference

```c
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
```
