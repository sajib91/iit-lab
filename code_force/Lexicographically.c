#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
    char str1[101],str2[101];
    scanf("%s %s",str1,str2);
    int count = 0;

    int l = strlen(str1);
    for(int i=0; i<l; i++){
        if('a' <= str1[i] && str1[i] <='z'){
            str1[i] = str1[i] -32;
        }
       
       if('a' <= str2[i] && str2[i] <='z'){
        str2[i] = str2[i] - 32;

        }
   
    }
    for(int i=0; i<l; i++){
          
       if(str1[i] == str2[i]){
        continue;
       }
       else if(str1[i] > str2[i]){
        printf("1");
        return 0;
       }
       else{
        printf("-1");
        return 0;
       }
    }
    printf("%d",count);

    return 0;
}