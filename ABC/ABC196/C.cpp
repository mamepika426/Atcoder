#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string N;
    cin >> N;
    int con_digits = N.size();
    int ans = 0;

    //奇数桁の場合
    if(con_digits%2){
        con_digits = con_digits-1;
        for(int n=0;n<con_digits/2;n++){
            ans+=9*pow(10,n);
        } 
    }
    //2桁の場合
    else if(con_digits==2){
        ans += N[0]-'1';
        if(N[0]==N[1]) ans++;
    }
    //それ以外
    else{
        for(int n=0;n<(con_digits/2)-1;n++){
            ans+=9*pow(10,n);
        }
        string N_top[con_digits/2],N_bottom[con_digits/2];
        for(int n=0;n<con_digits/2;n++){
            N_top[n]=N[n];
            N_bottom[n] = N[con_digits/2+n];
        }
        for(int n=0;n<con_digits/2-1;n++){
            ans+=(N_top[n]-'1')*pow(10,con_digits/2-n-1);
        }
    }
    cout << ans << endl;
    return 0; 

}