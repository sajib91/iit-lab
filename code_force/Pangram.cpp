#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    getchar();
    char a[n+1];
    cin.getline(a, n+1);
      for(int k=0; k<n; k++){
        if(a[k] >= 'A' && a[k] <= 'Z')
         a[k] = a[k] + 32;
      }
      cout << a << endl;
      
    for(int i=0; i<n; i++){
      if(a[i] == -1)  
        i++;
        for(int j=i+1; j<n; j++){
            if(a[i] == a[j]){
                n--;
                a[j] = -1;
                
            }
        }
    }
    cout << n << endl;
    if(n == 26)
      cout << "YES";
    else
      cout << "NO";  

    return 0;
}

