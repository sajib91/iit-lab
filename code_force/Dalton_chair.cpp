#include<bits/stdc++.h>
using namespace std;

int solve(){

    long long n, a,sum=0;
      cin >> a >> n;

    for(long long i=1; i<=n; i++){
        sum+=abs(i%a - i%(a-1));
    }

   return sum;

}

int main(){

    int t,x=1;
    cin >> t;
    
    while(x <= t){
    cout << "Case " << x <<":" << " " << solve() << endl;
    x++;
    }
}