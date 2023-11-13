#include<bits/stdc++.h>
using namespace std;
 
 void Balloon(){
     int n;
     cin >> n;
     string str;
     cin >> str;
     int sum = 0;
     
     for(int i=0; i<n; i++){
        int count=0;
    
        for(int j=i; j<n; j++){
                
            if(str[i] == str[j]){
                count++;
                str[i] = -1;
            }
         
        }
        
        count = count + 1;
        sum = sum + count;
        
     }
     
     cout << sum << endl;
 }
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        Balloon();
    }
    return 0;
}

