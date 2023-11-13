#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int solve(){

    long long int n, a;

    scanf("%lld%lld", &a, &n);
    long long int sum=0;

    for(long long int i=1; i<=n; i++){
       if(i%a - i%(a-1)>0)
        sum+=(i%a - i%(a-1));

      else
        sum-=(i%a - i%(a-1));

    }

   return sum;

}

int main(){

    int t,x=1;
    scanf("%d", &t);
    
    while(x<=t){
     
    int temp = solve();
     printf("Case %d: %d\n",x,temp);
     x++;

    }

}