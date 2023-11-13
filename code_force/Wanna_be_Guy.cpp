#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count = 0,i,j;
    cin >> n;
    int a[n],b[n];
    cin >> a[0];
    for(int i=1; i<=a[0]; i++){
        cin >> a[i];
    }
    cin >> b[0];
    for(int j=1; j<=b[0]; j++){
        cin >> b[j];
    }
    for(j=1; j<=b[0]; j++){
        for(i=1; i<=a[0]; i++){
        if(a[i] == b[j])
         break;
         if(i == a[0])
          count++;
    }
       
    }
    
   int x = count + a[0]; 
   if(a[0] == 0) 
    x = b[0]; 
  
    if(n == x)
     cout << "I become the guy.";
    else
    cout << "Oh, my keyboard!";
   
     
   return 0;   
}