#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int temp1,temp2,count=0;
    for(int i=0; i<n; i++){
        if(a[i]==0){
            temp1 = i;
            break;
        }
        count++; 
    }
    for(int i=n-1; i>=0; i--){
        if(a[i]==0){
            temp2 = i;
            break;
        } 
        count++;  
    }
    int m1=0,m2=0;
    for(int i=temp1; i<=temp2; i++){
        if(a[i]==0)
         m1++;
         else
          m2++;
    }
    if(m1 > m2){
        cout << count+m1 << endl;
    }
    else
    cout << count+m2 << endl;

    return 0;
}