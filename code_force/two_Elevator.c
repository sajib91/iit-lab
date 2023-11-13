#include<stdio.h>
#include<stdlib.h>

int main(){
      int t;
      scanf("%d",&t);

      while (t--)
      {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);

          int x = abs(b-c) + c-1;

          if(a==1 || (a-1)<x)
          printf("1\n");
          else if((a-1) > x )
          printf("2\n");
          else
          printf("3\n");
      }
      
   return 0;
}