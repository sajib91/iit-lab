#include<stdio.h>

int main()
{
    int n,a,b,total=0,max=0;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d %d",&a,&b);
        total = total + (b-a);
        if(max<total)
        max = total;
        
    }
    printf("%d",max);

    return 0;
    
}