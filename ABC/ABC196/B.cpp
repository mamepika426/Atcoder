#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string X;
    cin >> X;
    string ans[X.size()+1];
    bool end = false;
    int all_digits = X.size(); 
    int ans_digits = 0;
    /*
    for(int n=0;(n<=all_digits)&&(!end);n++){
        if(X[n]!='.') {
            ans[n] = X[n];
            ans_digits++;
        }
        else end=true;
    }
    */
   while((!end)&&(ans_digits<all_digits)){
       if(X[ans_digits]!='.') {
            ans[ans_digits] = X[ans_digits];
            ans_digits++;
        }
        else end=true;
   }
    for(int n=0;n<ans_digits;n++){
        cout << ans[n];
    }
    cout << endl;
    return 0;
}