#include<stdio.h>

int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a + b == c)
        printf("+\n");
        else 
        printf("-\n");
    }
    return 0;
}