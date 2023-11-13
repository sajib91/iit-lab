#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void solve(){
     int n;
     cin >> n;
     int a[n][2];

     for(int i=0; i<n; i++){
      for(int j=0; j<2; j++){
        cin >> a[i][j];
      }
     }
     int x, minimum = 100000, temp;
     for(int i=0; i<n; i++){
        x = abs(a[i][0]-a[i][1]);
        if(minimum > x){
          minimum = x;
          temp = i;
        }
        else if(minimum == x){
          if(a[i][0] < a[temp][0]){
            temp = i;
          }
        }
     }
     if(a[temp][0] > 1 && a[temp][1]==1){
      cout << a[temp][0]-1 << endl;
      return;
     }
     if(a[temp][1] % 2 ==0){
      a[temp][1] = (a[temp][1]/2)-1;
      cout << a[temp][0] + a[temp][1] << endl;
     }
     else{
      a[temp][1] = a[temp][1]/2;
      cout << a[temp][0] + a[temp][1] << endl;
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