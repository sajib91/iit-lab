#include<stdio.h>
#include<string.h>

int main(){
    int tc;
    char arr[100];
    scanf("%d",&tc);
    for(int i=0; i<tc; i++){
        scanf("%s",&arr);
        int length = strlen(arr);
        if(length <= 10)
            printf("%s\n",arr);
        else{
         
                printf("%c%d%c\n",arr[0],length-2,arr[length-1]);
            
        }    
        

    }
    return 0;
}