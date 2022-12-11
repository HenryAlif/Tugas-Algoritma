#include <stdio.h>
#include <conio.h>

void main(){
    int i,j; 
    printf("P\tQ\tP or Q\tP and Q\tNot P\tP xor Q\n"); 
    printf("=================================================\n");
    for(i=1;i>=0;i--){
        for(j=1;j>=0;j--){ 
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",i,j,(i || j),(i && j),!i,(i ^j));
        }
    }
 }