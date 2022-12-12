#include <stdio.h>

struct PlayerScores {
    char name[8];
    int Army;
    int Heroes;
    int resources;
    int score;
};

void sort(struct PlayerScores *players, int n){
    for (int i = 1; i < n; i++){
        if (players[i]->score > players[i-1]->score){
            int name[10] = players[i]->name;
        }
    }
}

int main()
{
    struct PlayerScores players[]= {{"tobuso",10, 4, 1000, 304}, {"anonim", 5, 6, 499, 305}};
    int n = sizeof(players)/sizeof(players[0]);
    for(int i = 0; i < n; i++){
        printf("name: %s, army: %d, heroes: %d, resources: %d, score: %d\n", players[i].name, players[i].Army, players[i].Heroes, players[i].resources, players[i].score);
    }
    return 0;
}
