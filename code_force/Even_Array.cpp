#include<bits/stdc++.h>
using namespace std;

void good_array(){
    int n,p=0,q=0,count=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i] % 2== 0)
         p++;
        else
         q++;
    }
    int temp;
    if(p==q || p == q+1){
      for(int i=0; i<n; i++){
        if(a[i]%2 != 0 && i%2==0){
          for(int j=i+1; j<n; j++){
            if(a[j] % 2 ==0 && j%2 != 0){
             temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            count++;
            break;
            }
            
          }
        }
          else if(a[i]%2 ==0 && i%2==0){
            continue;
            }
            else if(a[i]%2 ==0 && i%2 != 0){
             for(int j=i+1; j<n; j++){
                
            if(a[j] % 2 !=0 && j%2 == 0){
             temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            count++;
            break;
            }
            
          }
            }
            else{
                continue;
            }
        }
        
       
    }
    else{
        count = -1;
    }

    cout << count << endl;

}

int main(){
     int t;
     cin >> t;
     while (t--)
     {
        good_array();
     }
  return 0;   
}