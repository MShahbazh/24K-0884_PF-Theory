#include<stdio.h>
#include<stdbool.h>
typedef struct Player{
    int ballScores[12];
    char playername[50];
    int totalScore;
}Player;
int validateScore(int score){
    if(score>=0 && score<=6) return score;
    else return -99;
}
int findWinner(Player *player1,Player *player2){
    int i;
    player1->totalScore=0;
    player2->totalScore=0;
    for(i=0;i<12;i++){
        if(player1->ballScores[i]!=-99){
            player1->totalScore+=player1->ballScores[i];
        }
        if(player2->ballScores[i]!=-99){
            player2->totalScore+=player2->ballScores[i];
        }
    }
    if(player1->totalScore>player2->totalScore) return 1;
    else return 2;
}

void playgame(Player *player1,Player *player2){
    int i;
    for(i=0;i<12;i++){
        printf("\n");
        printf("%s -> Ball %d Score: ",player1->playername,i+1);
        scanf("%d",&player1->ballScores[i]);
        player1->ballScores[i]=validateScore(player1->ballScores[i]);
        printf("%s -> Ball %d Score: ",player2->playername,i+1);
        scanf("%d",&player2->ballScores[i]);
        player2->ballScores[i]=validateScore(player2->ballScores[i]);
    }
    }

void displayMatchScoreboard(Player *player1, Player *player2){
    int i;
    float avg1,avg2;
    printf("\n");
    printf("%-5s | %-5s | %-5s\n","Balls",player1->playername,player2->playername);
    for(i=0;i<12;i++){
        printf("Ball %-5d | %-5d | %-5d\n",i+1,player1->ballScores[i],player2->ballScores[i]);
    }
        avg1=player1->totalScore/12;
        avg2=player2->totalScore/12;
       printf("\nPlayer name: %s\n",player1->playername);
       printf("Total Score: %d\n",player1->totalScore);
       printf("Average Score per ball: %.2f\n",avg1);
       
       printf("\nPlayer name: %s\n",player2->playername);
       printf("Total Score: %d\n",player2->totalScore);
       printf("Average Score per ball: %.2f\n",avg2);

    if( findWinner(player1,player2)==1){
        printf("\n%s Won",player1->playername);
    }
    else{
       printf("\n%s Won",player2->playername);
    }
}
int main(){
    Player player1;
    Player player2;
    printf("\nEnter Player 1's Name: ");
    scanf("%s",&player1.playername);
    printf("\nEnter Player 2's Name: ");
    scanf("%s",&player2.playername);
    playgame(&player1,&player2);
    findWinner(&player1,&player2);
    displayMatchScoreboard(&player1,&player2);
    
    return 0;
}