#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int N=0; 
int X=0;
int terbesar = 0;
int count = 0;
int total = 0;
float hasil = 0;

int main() {
    scanf("%d",&N);
    int nilai[N];
    for (int i=0;i<=N-1;i++){
    scanf("%d",&X);
    nilai[i]=X;
    }
    
    for (int i=0;i<=N-1;i++){
    total = total + nilai[i];
        if(terbesar < nilai[i]){
            terbesar = nilai[i];
            count = 1;
        }
        else if(terbesar == nilai[i]){
            count = count+1;
        }
    }
    printf("Max : ");
    printf("%d\n",terbesar);
    printf("Count : ");
    printf("%d\n",count);
    printf("days : ");
    for (int i=0;i<=N-1;i++){
        if(terbesar == nilai[i]){
            printf("%d ",i+1);
        }
    }
    printf("\n");
    hasil =(float) terbesar * count / total *100;
    printf("Percentage : ");
    printf("%.3f%%",hasil);
    return 0;
}