#include<stdio.h>
int main(){
    int tc,n;
    scanf("%d",&tc);
    while (tc--)
    {
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
           
        }
        int mihai = 0, bianca = 0;
       for(int i=0; i<n; i++){
         if(a[i]%2==0)
            mihai = mihai + a[i];
            else
            bianca = bianca + a[i];
       }
       if(mihai <= bianca)
       printf("NO\n");
       else
       printf("YES\n");
        
    }

    return 0;
    
}