#include<stdio.h>

int main(){
    int tc;
    scanf("%d",&tc);
    int arr[tc];
    int i=0;
    while (tc--)
    { 
        scanf("%d",&arr[i]);
       
        if(arr[i] == 1){
            
            printf("HARD");
            return 0;
        }
         i++;
    }
    printf("EASY");

    return 0;
    
}