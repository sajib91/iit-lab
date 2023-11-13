#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int a[n],b[m];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
     for(int i=0; i<m; i++){
        cin >> b[i];
    }
   int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(b[j]==-1){
                continue;
            }
           else if(a[i]==b[j] || a[i]-b[j]<=k || b[j]-a[i]<=k){
                count++;
                b[j] = -1;
                break;
            }
        }
    }
    cout << count << endl;

    return 0;
    
}