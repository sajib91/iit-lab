#include<bits/stdc++.h>
using namespace std;

void solve(){
       long long n; int x;
       cin>>n;
       if(n%2 != 0){
            x = 1;
            cout<<x<<endl;
       }
       else{
        for(x=2; x>=0; x++){
            if(n%x != 0){
                cout << x-1 << endl;
                break;
            }
        }
       }
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}