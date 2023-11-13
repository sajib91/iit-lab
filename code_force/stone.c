#include<stdio.h>
#include<string.h>
int main(){
    int n,count =0;
    scanf("%d",&n);
    char stone[n+1];
    scanf("%s",stone);
    int length = strlen(stone);
    
    
    for(int i = 0;i < length - 1;i++){
        if(stone[i] == stone[i+1])count++;

    }
   
    printf("%d",count);

    return 0;
}