#include<stdio.h>
#include<string.h>

int main(){
    char str[101];
    scanf("%s",str);

    int length = strlen(str);

    char arr[length + 1];
    printf("length = %d\n",length);

    int j = 0;
    for (int i = length-1 ; i >=0; i--)
    {   
        arr[j] = str[i];
        j++;
    }
   arr[length] = '\0';
   printf("%s",arr);

    return 0;
    
}