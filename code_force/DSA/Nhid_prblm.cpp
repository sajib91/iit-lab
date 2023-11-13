#include<bits/stdc++.h>

using namespace std;

void found_pump(){
   
    int x;
    printf("Enter kilometer: ");
    cin >> x;
    int temp1 = x,temp2 = x;
    for(int i=0; i<5; i++){
        if(temp1 % 5){
            temp1++;
        }
        if(temp2 % 5){
            temp2--;
        }
    }
    if((temp1 - x) > (x - temp2)) cout << temp2 << endl;
    else cout << temp1 << endl;


}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        found_pump();
    }
    

    return 0;
}