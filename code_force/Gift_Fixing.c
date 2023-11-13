#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
         int n;
         scanf("%d",&n);
         int a[n],b[n];
         for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
         }
         for(int i=0; i<n; i++){
            scanf("%d",&b[i]);
         }

         int a_min=1000000002,b_min=1000000002;
        for(int i=0; i<n; i++){
            if(a_min > a[i])
              a_min = a[i];

            if(b_min > b[i])
               b_min = b[i];  
            }
            long long int max=0;
         for(int i=0; i<n; i++){
            if((a[i]-a_min) > (b[i]-b_min)){
               max = max + (a[i] - a_min);
            }
            else
            max = max + (b[i]-b_min);
         }
        
       
        printf("%lld\n",max);

    }
     return 0;
    }
    
    
