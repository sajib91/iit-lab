#include<stdio.h>

int main(){
    int input,size;
    scanf("%d",&input);
    for(int i=0; i<input; i++){
        scanf("%d",&size);
        
        int max = 0;
        int arr[size];
        for(int j=0; j<size; j++){
            scanf("%d",&arr[j]);
        }
        for(int m=0; m<size; m++){
            int count=0;
        for(int k=m; k<size; k++){
            
            
             if(arr[k]==0){
                count++;
            
             }
             else{
                 break;
             }
             
            
        }
        if(max < count){
            max = count;
        }
        }
        printf("%d\n",max);
    }
    return 0;
}
