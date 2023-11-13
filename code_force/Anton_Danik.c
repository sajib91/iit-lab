#include<stdio.h>
int main(){
    int n,A=0,D=0;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    for(int i=0; i<n; i++){
        if(str[i] == 'A') A++;
        else D++;
    }
    if(A>D) printf("Anton");
    else if(D>A) printf("Danik");
    else printf("Friendship");

    return 0;
}