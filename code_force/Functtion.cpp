#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, sum;
    cin >> n;
    if(n % 2 == 0)
    sum = n/2;
    else
    sum = -((n/2) + 1);
    
    cout << sum;

    return 0;
}