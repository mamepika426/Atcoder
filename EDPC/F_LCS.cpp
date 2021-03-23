#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T& a,T b){
    if(a<b) a = b;
}

int main(){
    string s,t;
    cin >> s >> t;

    vector<vector<int>> dp(s.size()+1,vector<int>(t.size()+1));
    for(int i=0;i<=s.size();i++){
        for(int j=0;j<=t.size();j++) dp[i][j] = 0;
    }
    
    for(int i=0;i<s.size();i++){
        for(int j=0;j<t.size();j++){
            if(s[i]==t[j]){
                chmax(dp[i+1][j+1],dp[i][j]+1);
            }
            else{
                chmax(dp[i+1][j+1],dp[i+1][j]);
                chmax(dp[i+1][j+1],dp[i][j+1]);
            }
        }
    }
    
    int len = dp[s.size()][t.size()],i=s.size(),j=t.size();
    if(len==0) cout << "" << endl;
    // else{
    //     string ans = "";

    //     while(len>0){
    //         if(s[i-1]==t[j-1]){
    //             ans+=s[i-1];
    //             i--;
    //             j--;
    //             len--;
    //         }
    //         else if(dp[i][j]==dp[i-1][j]) i--;
    //         else j--;
    //     }
    //     reverse(ans.begin(),ans.end());

    //     cout << ans << endl;
    // }

        else{
        char ans[len];

        while(len>0){
            if(s[i-1]==t[j-1]){
                ans[len-1] = s[i-1];
                i--;
                j--;
                len--;
            }
            else if(dp[i][j]==dp[i-1][j]) i--;
            else j--;
        }
        
        for(int i=0;i<len;i++) printf("%c",ans[i]);
        cout << endl;
    }



    return 0;
}