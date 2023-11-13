#include<stdio.h>
int main(){
    int pertipant,k_th;
    scanf("%d %d",&pertipant,&k_th);
    int arr[pertipant],count = 0;
    for(int i=0; i<pertipant; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < pertipant;i++ ){
            
            if(arr[i]  >=  arr[k_th - 1] && arr[i] > 0)count++;

    }
      
    printf("%d",count);
    return 0;
}