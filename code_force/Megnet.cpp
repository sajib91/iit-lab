#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int cnt  = 1;
    while(t--){
        //char a[t][2];
        string a[t];
      for(int i = 0; i < t;i++)
            cin >> a[i];
      
      cout << "first string er last charac: " << *(a[0].end() - 1) << endl << '\n';
       
       for(int i = 0; i  < t - 1;i++){
           
                if(*a[i].end() == *a[i+1].begin())
                  cnt++;      

       }
       

    }
    cout << cnt << endl;

return 0;    
}