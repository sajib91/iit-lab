#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    int a[n],i,j;
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    int b[q][2];
    for(i=0; i<q; i++){
        
            cin >> b[i][0] >> b[i][1];
        
    }
    
    for(int m=0; m<q; m++){
        int sum = 0;
        for(int x=(b[m][0]-1); x<=(b[m][1]-1); x++){
            sum = sum + a[x];
        }
        cout << sum << endl;
        
    }
    return 0;
}