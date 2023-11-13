#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    char str[m][n];
    getchar();
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> str[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
           if(str[i][j]=='Y' || str[i][j]=='M' || str[i][j]=='C'){
            cout << "#Color" << endl;
            return 0;
           }
        }
    }
    cout << "#Black&White";


    return 0;
}