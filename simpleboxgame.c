#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
void main(){
    int rdm;
    char box;
    rdm=rand() % 4; 
    printf("The ball is inside the BOX%d\n",rdm);

    printf("Please wait BOXES are currently shuffling!\n");
    sleep(1);
    printf("almost there!\n");
    sleep(1);
    printf("Here\n");
    sleep(1);
    printf("WE\n");
    sleep(1);
    printf("GO\n");
    rdm=rand() % 3;
    printf("now choose the box with the ball inside (box1,box2,box3)\n");
    scanf(" %c",&box);
    if (box=="box1" && rdm == 0){
        printf("you won");
    }
    else if (box=="box2" && rdm==1){
        printf("you won");
    }
    else if (box=="box3" && rdm==2){
        printf("you won");
    }
    else{
        printf("You Failed");
    }
}