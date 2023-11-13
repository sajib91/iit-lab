#include<bits/stdc++.h>
using namespace std;

void cut_rope(){
    int n,count=0;
    cin >> n;
    int a[n][2];

    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin >> a[i][j];
        }
    }
     for(int i=0; i<n; i++){
       if(a[i][0] > a[i][1]){
        count++;
       }
    }
    cout << count << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        cut_rope();
    }
    return 0;
}