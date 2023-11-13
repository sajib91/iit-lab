#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d",&t);

    while (t--)
    {
        int n,temp;
        scanf("%d",&n);
        int a[n],b[n];
        long long int probly=1;

        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }
        for(int i=0; i<n; i++){
            scanf("%d",&b[i]);
        }

       for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
       }

       for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(b[i] > b[j]){
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
       }
        for(int i=0; i<n; i++){
            long long int count=0;
            for(int j=0; j<n; j++){
            if(a[i] > b[j]){
                count = count + 1;
                
            }

        }
        probly = probly * (count - i);
        
        }
        printf("%lld\n",probly);
    }

    return 0;

}