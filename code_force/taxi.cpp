#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int a[n],count = 0,d = 0,b = 0,c = 0;
    for(int i = 0;i < n;i++){
         cin >> a[i];
         if(a[i] == 4)count++;
         if(a[i] == 3)d++;
         if(a[i] == 2)b++;
         if(a[i] == 1)c++;
    }
    if(d > c)c = 0;
    else  c -= d;
    count = count + d ;
 
   if((2*b + c) % 4)count += (2*b + c)/4 +1;
   else count += (2*b + c)/4;
    
   cout << count ;


return 0;    
}