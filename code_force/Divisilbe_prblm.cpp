#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,x;
        cin >> a >> b;
        int temp = a/b;
        if(a > b && (a%b != 0)){
           x = b * (temp+1); 
           cout << (x-a) << endl;
        }
        else if(b > a){
            cout << (b-a) << endl;
        }
        else{
            x=0;
            cout << x << endl;
        }
        
    }   
    return 0;
    
}