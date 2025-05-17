#include <stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("rw.txt","w+");
    fprintf(ptr,"hello name  ");
   return 0;
}
 