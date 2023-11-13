#include<stdio.h>
#include<string.h>
int main(){
    int n,count;
    char s[] = "codeforces";
    char str[12];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        count = 0;
        scanf("%s",str);
        for(int j=0; j<10; j++){
            if(!(s[j]==str[j]))
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}