#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int amount,r1,r2,r3,bet;
    char name[20];
    char one, two, three;
    amount=10000;
    while(con=="yes"){
    printf("Whats your name?\n");
    scanf("%s",name);
    printf("Hello %s are you ready for the big win? if yes Enter the betting amount :) (current balance:%d)\n",name,amount);
    scanf("%d",&bet);
    
    r1=rand() % 2;
    r2=rand() % 2;
    r3=rand() % 2;
    //for r1
    if (r1==0){
        one='X';}
    else if (r1==1){
        one='O';}
    else{
        one='Z';}


    if (r2==0){
        two='X';}
    else if (r2==1){
        two='O';}
    else{
        two='Z';}


    if (r3==0){
        three='X';}
    else if (r3==1){
        three='O';}
    else{
        three='Z';}

printf("%c",one);
sleep(2);
printf("%c",two);
sleep(4);
printf("%c\n",three);
sleep(6);

if (one==two && two==three){
    amount=amount+bet*2;
    printf("Congratulations You Just won %d (Total amount in account:%d)",bet*2,amount);
}
else{
    printf("Unfortunately you lost :( but you shouldnt stop here!\n Just remember 90 percentage of Gambling Addicts Quit Right Before They're About to Hit It Big\n)");
    printf("\n%d deducted from your account, Balance: %d",bet,amount-bet);
}
    }
    
}