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