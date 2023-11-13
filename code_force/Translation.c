#include<stdio.h>
#include<string.h>

int main(){
    char str[101],arr[101];
    scanf("%s %s",str,arr);

    int size = strlen(str);
    int j=0;
    for(int i=size-1; i>=0; i--){
        if(str[i] == arr[j]){
            j++;
            continue;
        }
        else{
            printf("NO");
            return 0;
        }      
    }
    printf("YES");

    return 0;
}