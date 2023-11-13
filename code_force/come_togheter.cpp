#include<bits/stdc++.h>
using namespace std;
 void Come_Together(){
     int a[2],b[2],c[2];
     for(int i=0; i<2; i++){
        cin >> a[i];
     }
     for(int i=0; i<2; i++){
        cin >> b[i];
     }
     for(int i=0; i<2; i++){
        cin >> b[i];
     }
     while (b[0] != c[0] || b[1] != c[1])
     {
       if(b[0] < c[0]){
          if(b[0] < (c[0]+1))
          b[0]++;
        c[0]--;
      }
      else if(b[0] > c[0]){
         if((b[0]+1) > c[0])
          c[0]++;
        b[0]--;
      }
      if(b[1] < c[1]){
         if(b[1] < (c[1]+1))
          b[1]++;
        c[1]--;
      }
      else  if(b[1] > c[1]){
         if((b[1]+1) > c[1])
          c[1]++;
        b[1]--;
      }
     } 
     int temp = (abs(b[0] - a[0]) + abs(b[1] - a[1]));
     cout << temp + 1 << endl;    
 }

int main(){
    int t;
    cin >> t;
    while (t--)
    {
       Come_Together();
    }
 return 0;
}