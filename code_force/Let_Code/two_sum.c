#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int num[n],target;
    for(int i=0; i<n; i++){
        scanf("%d",&num[i]);
    }
    scanf("%d",&target);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(num[i] + num[j] == target){
                printf("[%d,%d]",i,j);
                return 0;
            }
        }
    }
    return 0;

}