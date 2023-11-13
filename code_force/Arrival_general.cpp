#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,count=0,temp;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int j=1; j<n; j++){
        for(int k = j+1; k<n; k++){
            if(a[j] < a[k]){
                count++;
                temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
        }
    }
    cout << count << endl;

    return 0;
} 