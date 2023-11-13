#include<bits/stdc++.h>
using namespace std;

long long int x=0,y=0;

void X_team(){
  x++;
}
void Y_team(){
    y++;
}
int main(){
    string m;
   
    while (m != "DRAW")
    {
        cin >> m;
        if(m == "Y")
        Y_team();
        else if(m == "X")
         X_team();
    
    }
    cout << "X vote is : " << x << endl;
     cout << "Y vote is : " << y << endl;
    
  return 0;
}