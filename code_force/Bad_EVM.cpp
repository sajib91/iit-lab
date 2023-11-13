#include<bits/stdc++.h>
using namespace std;

long long int x = 0, y=0;

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
        if(y < 3 && m == "Y")
        Y_team();
    
        else
         X_team();
    
    }
    cout << "X vote's : " << x-1 << endl;
     cout << "Y vote's : " << y << endl;
    
    return 0;
}