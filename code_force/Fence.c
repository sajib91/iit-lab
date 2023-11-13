#include<stdio.h>

int main(){
    int n,h,count=0;
    scanf("%d %d",&n,&h);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i] <= h)
        count++;
        else count = count+2;

    }
    printf("%d",count);
    
       
    return 0;
}