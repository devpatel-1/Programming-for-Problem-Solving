#include <stdio.h>
#include <string.h>

struct Game {
    char playerName[50];
    char teamName[50];
    int maxScore;
};

int main () {

    struct Game Player[3];

    for (int i = 0; i < 3; i++) {
        printf("\n Enter details for player %d:\n", i+1);
        printf("Name: ");
        scanf(" %[^\n]", Player[i].playerName);
        printf("Team name: ");
        scanf(" %[^\n]", Player[i].teamName);
        printf("Maximum score: ");
        scanf("%d", &Player[i].maxScore);
    }

printf("\n Team-wise Report:\n");
Printf("=====================\n");

for (int i = 0; i < 3; i++) {
    int teamPrinted = 0;
    for (int k = 0; k < i; k++) {
        if (strcmp(Player[i].teamNme, Player[k].teamName) == 0) {
            teamPrinted = 1;
            break;
        }
    }
    if (teamPrinted == 0) {
        printf("\nTeam: %s\n", Player[i].teamName);
        printf("-------------\n");

        for (int j = 0; j < 3; j++) {
            if (strcmp(Player[i].teamName, Player[j].teamName) == 0) {
                printf("Player: %s, Score: %d\n", Player[j].playerName, Player[i].maxScore);
            }
        }
    }
}
return 0;
}