#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,str;
        cin >> n;
       str = n/7 ;
       str = str * 7;

       if(str < 10 || n == 20){
        cout << str + 7 << endl;
       }
       else
        cout << str << endl;
       
   }   
   return 0;
    
}