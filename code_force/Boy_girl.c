#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int count  = 0;
    char arr[101];
    scanf("%s",arr);
    int length = strlen(arr);
    for(int i=0; i<length; i++){
       for(int j=i+1; j<length; j++){
       if (arr[i] == arr[j]) {

            arr[j] =-1;
        }
       }
         
     }
      for(int i=0; i<length; i++){
        if(arr[i] != -1)
        count++;
      }
     
     if(count%2==0)
     printf("CHAT WITH HER!");
     else 
     printf("IGNORE HIM!");
    

     return 0;
}