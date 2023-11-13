#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    string a;
    cin >> a;
    for(int i = 0; i < t;i++){

        for(int i = 0;i  <  a.size() - 1 ;){
            if(a[i] == 'B' && a[i+1] == 'G') {
              swap(a[i],a[i+1]); i += 2;
            }
            else i++;  
        }
    }
    cout << a << endl;
    return 0;

}