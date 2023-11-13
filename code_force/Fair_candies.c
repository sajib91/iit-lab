#include<stdio.h>
#include<string.h>

int main(){
    int tc;
    scanf("%d",&tc);
    while (tc--)
    {
        int one=0,two=0;
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
            if(arr[i] == 1)
            one++;
            else
            two++;
        }
       if(one%2 != 0){
        printf("NO\n");
       }
       else{
         if(two % 2 == 0){
            printf("YES\n");
         }
         else if(one != 0){
            printf("YES\n");
         }
         else
         printf("NO\n");

    }
   }
 return 0;
}