#include<stdio.h>

int main(){
   int y,temp;
   int arr[5];
   scanf("%d",&y);
   for(int i=0; i>=0; i++){
     y++;
    temp = y;
   

    int j=0;
  
    while (y!=0)
    {
      arr[j] = y%10;
      
      y = y/10;
      j++;
    }
    y=temp;
    if(arr[0] != arr[1] && arr[0]!=arr[2] && arr[0]!=arr[3] && arr[1] !=arr[2] && arr[1] !=arr[3] && arr[2] != arr[3]){
      printf("%d",y);
      return 0;
    }
    
   }
   
   return 0; 
    
}