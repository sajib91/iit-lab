#include<stdio.h>
#include<stdlib.h>

int main(){
    int mat[5][5],temp;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d",&mat[i][j]);
        }
    }
     for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(mat[i][j]==1){
               temp = abs(2-i)+abs(2-j);     
            }
        }
    }
    printf("%d",temp);
}