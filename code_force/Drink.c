#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    double sum=0.0,avg;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    avg = sum/n;
    printf("%.12lf",avg);

    return 0;
}