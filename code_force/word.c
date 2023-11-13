#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
int main(){
    int upper=0,lower=0;
    char word[101];
    scanf("%s",word);
    int length = strlen(word);
    for(int i=0; i<length; i++){
        if(word[i]>='a' && word[i]<='z')
        lower++;
        else
        upper++;

    }
    if(lower>=upper){
        for(int i=0; i<length;i++){
        word[i] = tolower(word[i]);
        
        }
        printf("%s",word);
    }
    else{
        for(int i=0; i<length;i++){
        word[i] = toupper(word[i]);
        
        }
        printf("%s",word);
    }
    
  return 0;
}