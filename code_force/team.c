#include<stdio.h>

int main(){
    int num_prblm;
         scanf("%d",&num_prblm);
         int arr[num_prblm][3];
        for(int j=0; j<num_prblm ;j++){
            for(int k=0; k<3; k++){
                scanf("%d",&arr[j][k]);
            }
    }
    int count =0;
    for(int i=0; i<num_prblm; i++){
        int temp =0;
        for(int m=0; m<3; m++){
           temp = temp + arr[i][m];
        }
        if(temp >=2){
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}