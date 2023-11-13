#include<bits/stdc++.h>
using namespace std;
int  main(){

    long long n;int cnt = 0;
    cin >> n;
    while(n){
        if((n%10) == 7 || (n%10) == 4)cnt++;
        n /= 10;

    }
    if(cnt == 4 || cnt == 7)cout << "YES";
    else cout << "NO";     

}