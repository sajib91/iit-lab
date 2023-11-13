#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }

        int b[n],temp,m[n];
        for(int i=0; i<n; i++){
            int min = 1000000;
            for (int j = 0; j < n; j++)
            { 
                if(a[j] == -1)
                continue;
                
                int x = a[i] + a[j];
                
                if(x <= min){
                    min = x;
                    temp = j;
                    
                }
            }
            b[i] = a[temp];
            a[temp] = -1;
           
            
        }
        for(int i=0; i<n; i++){
            printf("%d ",b[i]);
        }
        printf("\n");

    }
    return 0;
    
} 