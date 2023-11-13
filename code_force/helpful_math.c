#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int temp;
    char arr[101];
   scanf("%s",arr);
   //int length = sizeof(arr)/sizeof(arr[0]);
   int length = strlen(arr);
  for(int i=0; i< length; i+=2){
        for(int j=i+2; j< length; j+=2){
            if(arr[i] >= arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
   }
   
   
         printf("%s",arr);
   
  

   return 0;
}