#include<bits/stdc++.h>

using namespace std;

void board(){
     int n;
     cin >> n;
     int a[n];
     for(int i=0 ;i<n ;i++){
        a[i] = 1;
     }
     if(n <= 3){
        cout << "Bob\n";
        
     }
     else{
        cout << "Alice\n";
     }


}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        board();
    }

  return 0;  
}