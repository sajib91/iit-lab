#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int i,j;
    int max = 0,min = 100000,count=0;
    for(int i=1; i<n; i++){
      int temp = 0;
      for(j=i; j>=0; j--){
        if(max < a[j]){
           max = a[j];
           temp = 1;
        }
             
      }
      for(j=i; j>=0; j--){
        if(min > a[j]){
          min = a[j]; 
          temp = 1;
        }
            
      }
      if(temp != 0){
        if(a[i]==max || a[i]==min){
          count++;
        }
      }
    }
    
    cout << count << endl;

    return 0;
}