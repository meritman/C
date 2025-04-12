#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *file;
    file=fopen("textfile.txt","w");
    if (file==NULL){
        printf("error occured, try again later");
    }
    else{
        printf("file Opened succsesfuly");
    }
    return 0;
}
