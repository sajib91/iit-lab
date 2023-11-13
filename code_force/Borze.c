#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char s[201];
     int  a[200];
    scanf("%s",s);
    int i,j;
    for(i=0,j=0; s[i] != '\0';i++,j++){
        if(s[i] == '.'){
            a[j] = 0;
            
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            a[j] = 1;
            i++;
            
        }
        
    else{
         a[j] = 2;
         i++;
         continue;
    }
       
    }
    
    for(int k=0; k<j; k++){
            printf("%d",a[k]);
    }
    

  return 0;
}