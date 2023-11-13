#include<stdio.h>

int main(){
    int a,b,count=0;
    scanf("%d %d",&a,&b);
    while(3*a <= 2*b){
        count++;
        a=3*a,b=2*b;
    }
    
    printf("%d",count+1);

    return 0;
}