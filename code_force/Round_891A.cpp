#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int m = (n*(n-1))/2;
    int b[m],a[n];
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for(int j=i; j<m; j++){
            if(b[i]==b[j]){
                count++;
                
            }
        }
        
    }
    

}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}