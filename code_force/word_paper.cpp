#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n,m,k;
   cin >> n >> m >> k;
   int x,temp;
    temp = n/k;
    if(m <= temp){
      cout << m << endl;
      
    }
    else{
      if((k-1) >= (m-temp)){
        x = ((k-1)/(m-temp));
        cout << temp-x << endl;
      }
      else{
        x = ((m-temp)/(k-1)) + ((m-temp)%(k-1));
        cout << temp-x << endl;
      }
      
    }
    
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve(); 
    }   
 return 0;
    
}