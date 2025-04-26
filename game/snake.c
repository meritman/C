#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_PLAYERS 10
#define WINNING_POSITION 100

struct player {
    char pname[20];
    int ppos;
};

// Snake and ladder mappings
int snakeBite(int pos) {
    switch (pos) {
        case 99: return 10;
        case 90: return 48;
        case 76: return 34;
        case 52: return 11;
        case 25: return 5;
        default: return pos;
    }
}

int ladderClimb(int pos) {
    switch (pos) {
        case 3: return 22;
        case 6: return 25;
        case 20: return 40;
        case 36: return 55;
        case 50: return 91;
        default: return pos;
    }
}

int main() {
    srand(time(NULL));
    int PLAYER_COUNT;

    printf("Enter the number of players (max %d): ", MAX_PLAYERS);
    scanf("%d", &PLAYER_COUNT);
    if (PLAYER_COUNT > MAX_PLAYERS || PLAYER_COUNT < 1) {
        printf("Invalid player count. Exiting.\n");
        return 1;
    }

    struct player P[MAX_PLAYERS];

    // Get player names
    for (int i = 0; i < PLAYER_COUNT; i++) {
        printf("Enter name for player %d: ", i + 1);
        scanf("%s", P[i].pname);
        P[i].ppos = 0;
    }

    printf("\nGame started! First to reach %d wins!\n", WINNING_POSITION);

    int winner = -1;
    while (winner == -1) {
        for (int i = 0; i < PLAYER_COUNT; i++) {
            printf("\n%s's turn. Press ENTER to roll the dice...", P[i].pname);
            getchar(); // Wait for enter (first flush leftover)
            getchar();
            int roll = (rand() % 6) + 1;
            printf("%s rolled a %d!\n", P[i].pname, roll);

            P[i].ppos += roll;
            if (P[i].ppos > WINNING_POSITION) P[i].ppos = WINNING_POSITION;

            // Apply snake or ladder
            int pre = P[i].ppos;
            P[i].ppos = ladderClimb(P[i].ppos);
            if (P[i].ppos != pre) printf("Ladder! %s climbs to %d!\n", P[i].pname, P[i].ppos);
            else {
                P[i].ppos = snakeBite(P[i].ppos);
                if (P[i].ppos != pre) printf("Snake! %s slides to %d!\n", P[i].pname, P[i].ppos);
            }

            printf("%s is now on square %d\n", P[i].pname, P[i].ppos);

            if (P[i].ppos == WINNING_POSITION) {
                winner = i;
                break;
            }
        }
    }

    printf("\n\U0001F389 %s wins the game! \U0001F389\n", P[winner].pname);

    return 0;
}
