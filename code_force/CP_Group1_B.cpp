#include<bits/stdc++.h>
using namespace std;
void solve(){
    string a,b;
    cin >> a; 
    int l = a.length();
    int m = l;
    
    for(int i=0; i<l; i++){
        b[i]= a[m-1];
        m--;
    }
    
    for(int i=0; i<l; ){
        if(b[i] >= '5' && b[i] <= '9'){
            if(b[i] >= '5' && b[i] != '9'){
            b[i]='0';
            i++;
        }
        else if(b[i]=='9'){
            while (b[i] == '9')
            {
                b[i] = '0';
                i++;
            }
        }
        b[i] = (char)((int)b[i]+1);
        }
        else{
            int x=i;
            while (b[i] != '\0')
            {
                if(b[i] >= '5'){
                    for(int j=x; j<i; j++){
                        b[j]='0';
                    }
                    break;
                }
                i++;
            }
            
        } 
    }
   
    int temp[1]={1};
        if(b[l-1]=='0'){
        cout << temp[0];
        for(int k=l-1; k>=0; k--){  
        cout << b[k];
      } 
        }
    else{
        for(int k=l-1; k>=0; k--){  
        cout << b[k];
      } 
    } 
   
   cout << endl;

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