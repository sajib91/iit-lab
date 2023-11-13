#include<bits/stdc++.h>
#include<string>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int i;
    for (i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        string y;
        cin>>y;
        getchar();
        int j,count=0;
        for (j = 0; j < y.length(); j++)
        {
            if(y[j] == 'D')
             a[i]++;
             else 
              a[i]--;
        }
        if(a[i] > 9){
            a[i] = a[i]-10;
        }
        else if(a[i] >= 0 && a[i] <= 9)
         a[i] = a[i];
        else
         a[i] = a[i]+10;
    }
     
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout<< endl;
    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}