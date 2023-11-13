#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);

         if((n/2)%2)
          printf("NO\n");

          else{
            printf("YES\n");
            int a[n],sum1=0,sum2=0;
           int l=n/2;
            for(int i=0; i<l; i++){
                a[i] = (2*i)+2;
                a[l+i] = (2*i) + 1;
                
                sum1 = sum1 + a[i];
                sum2 = sum2 + a[l+i];

            }
            if(sum1 == sum2){
                 for(int j=0; j<n; j++){
                printf("%d ",a[j]);
            }
            printf("\n");
            }
            else{
                int temp = sum1 -(sum2-a[n-1]);
                a[n-1] = temp;
                 for(int j=0; j<n; j++){
                printf("%d ",a[j]);
            }
            printf("\n");

            }
                
    }
    
    }
    return 0;
}