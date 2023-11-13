#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            ans = max(ans, a[i]);
        }
    }
    
    cout << ans << endl;
}

int main() {
	
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}

// int main(){

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;int count = 0;
//         cin >> n;
//         int a[n];
//         for(int i=0; i<n; i++){
//             cin >> a[i];
//         }
//         int i,m;
//         for(i=0; i<n-1; i++){
//             int min1 = a[i];
//             for(int j=i+1; j<n; j++){
//                 if(a[i] > a[j])
//                  min1 = a[j];
                
//             }
//             if(a[i] != min1){
//                    if(i!=0) i--;
//                     break;
//                 }
//         }
//         for(m=n-1; m>=1; m--){
//             int max1=a[m];
//             for(int j=m-1; j>=0; j--){
//                 if(a[m] < a[j])
//                 max1 = a[j];
                
//             }
//             if(a[m] != max1){
                
//                     break;
//                 }
//         }
        
//         for(int k=i; k<m; k++){
//             if(a[k] > count){
//                 count = a[k];
//             }
//         }
        
//        cout <<count<< endl;
       
//     }
    

//     return 0;
// }