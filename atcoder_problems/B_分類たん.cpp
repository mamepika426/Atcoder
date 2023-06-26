#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    getline(cin,S);
    int size=S.size();
    string ans;
    /*
    vector<char> ans(2000);
    int cnt = 0;
    bool space = false;
    for(int n=0;n<size;n++){
        if(S[n]==','){
            ans[cnt]=',';
            cnt++;
            space = false;
        }
        else if(S[n]==' '){
            if(!space){
                ans[cnt] = ',';
                cnt++;
                space = true;
            }
        }
        else{
            ans[cnt]=S[n];
            cnt++;
            space = false;
        }
    }
    for(int n=0;n<size;n++) cout << ans[n];
    */
    bool space = false;
    for(int n=0;n<size;n++){
        if(S[n]==','){
            ans += ',';
            space = false;
        }
        else if(S[n]==' '){
            if(!space){
                ans += ',';
                space = true;
            }
        }
        else{
            ans += S[n];
            space = false;
        }
    }
    cout << ans;
    cout << endl;
    return 0;
}