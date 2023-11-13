#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int k , mini = INT_MAX;
        cin >> k;
        int a[k];
        for(int i = 0; i < k ; i++) cin >> a[i];
        for(int i = 0 ;i < k;i++)
            for(int j = i+1;j < k;j++)
                if(abs(a[i] - a[j]) < mini) mini = abs(a[i] - a[j]);
      
      cout << mini << endl;
    }
    return 0;
   
}