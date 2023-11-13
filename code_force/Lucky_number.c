#include <stdio.h>

int main() {
   
  long long int n;
  scanf("%lld",&n);
  long long int temp = n;
  int length = 1;
  while (temp=temp/10)
  {
    length++;
  } 
  for(int i=0; i<length; i++){
    
    if(n%10==7 || n%10==4){
        n = n/10;
        continue;
    }  
    else{
        printf("NO");
        return 0;
    }    
  }
 printf("YES\n");
  

 return 0;
}