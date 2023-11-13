#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,ans = 0,temp = 0;
        cin >> n >> k;
        if(n % 2){
            if( (n/2) % k) ans = ((n/2) / k) + 1;
            else ans = ((n/2) / k) ;
            if(((n/2 + 1)%k)== 0)
                temp = ((n/2 + 1)  / k) ;
            else temp =  ((n/2 + 1)  / k) + 1;
            if(temp > ans)ans += temp ;
            else ans = 2*ans;

        }
        else{
            if(((n/2)%k) == 0)
                ans = 2*((n/2)/k);
            else ans = 2*((n/2)/k) + 2;

        }

    cout<< ans << endl;
    }
return 0;

}