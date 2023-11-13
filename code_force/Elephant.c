#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int result = x/5;
   if(x%5 != 0)
   result++;

    printf("%d",result);

    return 0;
}