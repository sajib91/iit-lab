#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a[4];

        for(int i=0; i<4; i++){
           cin >> a[i];
        }
          int i=0,count=0;
           for(int j=i+1; j<4; j++){
                if(a[i]<a[j])
                 count++;
           }
        cout << count << endl;
        
    }
    return 0;
    
}