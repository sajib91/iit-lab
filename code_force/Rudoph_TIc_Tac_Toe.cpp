#include<bits/stdc++.h>
using namespace std;

void Tic_Tac(){
    string a,b,c;
    cin >> a >> b >> c;
    if((a[0]==b[0] && a[0]==c[0]))
     cout << a[0] << endl;
     else if((a[1]==b[1] && a[1] == c[1]))
       cout << a[1] << endl;
       else if((a[2]==b[2] && a[2]==c[2]))
        cout << a[2] << endl;
      else if((a[0]==b[1] && a[0]==c[2]) || (a[2]==b[1] && a[2]==c[0]))
         cout << b[1] << endl;
         else if(a[0]==a[1] && a[0] == a[2])
          cout << a[0] << endl;
         else if(b[0]==b[1] && b[0] == b[2]) 
            cout << a[0] << endl;
             else if(c[0]==c[1] && c[0] == c[2]) 
            cout << c[0] << endl;
            else
             cout << "DRAW" << endl;
}

int main(){
    int t;
    cin >> t;
    Tic_Tac();

    return 0;
}