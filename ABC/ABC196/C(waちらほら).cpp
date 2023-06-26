#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    string N;
    cin >> N;
    int num_digits = N.size();
    long long ans = 0;
    //奇数桁の場合
    if(num_digits%2){
        num_digits = num_digits-1;
        for(int n=0;n<num_digits/2;n++){
            ans+=9*pow(10,n);
        } 
    }
    //2桁の場合
    else if(num_digits==2){
        ans += stoi(N)/10-1;
        if(stoi(N)%11==0) ans++;
    }
    //それ以外
    else{
        string N_first_half=N.substr(0,num_digits/2);
        string N_second_half=N.substr(num_digits/2,num_digits/2);
        /*
        for(int n=0;n<num_digits/2;n++){
            N_first_half[n] = N[n];
            N_second_half[n] = N[num_digits/2-1+n]; 
        }
        */
        int num_first_half = stoi(N_first_half);
        int num_second_half = stoi(N_second_half);

        int half_digits = num_digits/2;
        int half1=pow(10,half_digits-1);
        while(half1<=num_first_half){
            if(half1<=num_second_half) ans++;
            half1++;
        }
        num_digits = num_digits-2;
        for(int n=0;n<num_digits/2;n++){
            ans+=9*pow(10,n);
        } 
    }
    cout << ans << endl;
    return 0; 
}