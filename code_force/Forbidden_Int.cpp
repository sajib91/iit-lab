#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,k,x,sum=0,count=0;
        cin >> n >> k >> x;
        int temp = n/k;
        if((temp*k) == n){
           cout << "YES" << endl;
           cout << temp << endl;
           for(int i=0;i<temp; i++){
              cout << k << " ";
           }
        }
        else{
         for(int i=k-1; i>0; i--){
            if(i==x) 
              i--;
            sum = (temp*k) + i;
            count++;
            count = count + temp;
            if(sum==n){
                cout << "YES" << endl;
               cout << count << endl;
           for(int i=0;i<temp; i++){
              cout << k << " ";
           }
           for(int i=temp;i<count; i++){
              cout << i << " ";
           }
        }
        else{
         cout << "NO";
        }
            }
            cout << endl;

         }
            
        }
    
  
  return 0;
}