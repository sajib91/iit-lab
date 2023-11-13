#include<stdio.h>
#include<string.h>

int main(){
    int tc;
    scanf("%d",&tc);
    while (tc--)
    {
        int n,count=0;
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",str);
        int length = strlen(str);
        for(int i=0; i<length; i++){
            if(str[i] != str[i+1] && str[i+1] != '\0'){
                
                count++;
            }
            if(str[i]==str[i+1] && str[i+1] != '\0'){
                count=1;
                continue;
            }
        }
        printf("%d\n",count);

    }

    return 0;
    
}