#include <stdio.h>


int solve(){

    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    int count=0;
    for(int range=2; range<=n; range++){

        for(int lim=range-1; lim<n; lim++){ // rn = 4; lim = 3

            for(int index=lim-range+2; index<lim; index++){ // in =

                if(arr[index]!=arr[index+1] ){

                        count++;
                        if(arr[index] != arr[index-1]) {
                            count++;
                            printf("Wrk ");
                            break;
                        }
                        break;
                }
            }


        }

    }

   return count;
}


int main(){

    int t,x=1;
    scanf("%d", &t);

    while(x <= t){
        
        printf("Case %d: %d\n",x,   solve());
        x++;

    }

}