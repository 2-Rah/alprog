#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int N,a,b,c;
int main() {
scanf("%d",&N);
b=N;

    for(a=1;a<=N-1;a++){
    c=b-a;
    
    for(int d=1;d<=c-1;d++){
        printf(" ");
        }
    if(a==1){
             printf("*");
           }
    else {
        printf("*");
        for(int e=1;e<=a-1;e++){
             printf("*");
            }
        for(int e=1;e<=a-1;e++){
             printf("*");
            }
         }
        
    printf(" \n");
    }

//akhir
    for(int a=1;a<=N-2;a++){
    printf(" ");
        }
    printf("* ");
    return 0;
}

/*
input = 5
spasi 4 bintang 1 spasi 1 *1
spasi 3 bintang 2 spasi 1 *2
spasi 2 bintang 3 spasi 1 *3
spasi 1 bintang 4 spasi 1 *4
spasi 0 bintang 5 spasi 1 *5
    
spasi 4 bintang 1 spasi 1 */ 