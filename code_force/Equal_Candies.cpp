#include<bits/stdc++.h>
using namespace std;

void Candies (){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int min=100000000,sum = 0;
    for(int i=0; i<n; i++){
        if(min >= a[i])
          min = a[i];
    }
    for(int i=0; i<n; i++){
        sum = sum + (a[i] - min);
    }
    cout << sum << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        Candies();
    }
    return 0;
}