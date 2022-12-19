## Programs
#### 1. Write a program to count blank spaces, digits, vowels and consonants in the string (do not use string header file)
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
        else if (name[i] == '1' || name[i] == '2' || name[i] == '3' || name[i] == '4' || name[i] == '5' || name[i] == '6' || name[i] == '7' || name[i] == '8' || name[i] == '9')
        {
            digitFlag++;
        }
        else if ((name[i] >= 'a' && name[i] <= 'z')||(name[i] >= 'A' && name[i] <= 'Z'))
        {
            if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'||name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
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