#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int tc,n,k;
    scanf("%d",&tc);
    while (tc--)
    {
        
       scanf("%d %d",&n,&k);
       int a1[n],a2[n],temp[n];
       for(int i=0; i<n; i++){
        scanf("%d",&a1[i]);
       }
       for(int i=0; i<n; i++){
        scanf("%d",&a2[i]);
       }
       int m,y,i,j,arr[n];
       for(i=0; i<n; i++){
         
        int min = 1000000;
        for(j=0; j<n; j++){

           int x = abs(a1[i]-a2[j]);
          if(j == arr[i])
             continue;
           else if(min > x){
             min = x;
            
             if(min <= k){
                temp[i] = a2[j];
                m=j;  
             }
           }
        }
        arr[i] = m;
       }
        for(int i=0; i<n; i++){
        printf("%d ",temp[i]);
        
       }
       printf("\n");

      
    }
    return 0;
    
}