#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int H,W,X,Y;
    cin >> H >> W >> X >> Y;
    vector<string> S(H);
    for(int h=0;h<H;h++) cin >> S[h];
    //ここまでで入力終わり

    int ans = 0;
    if(S[X-1][Y-1]=='.') ans++;

    bool can_above = true,can_left = true,can_bellow = true,can_right = true;
    int above=X-2,left = Y-2,bellow = X,right = Y;
    while(can_above&&(above>=0)){
        if(S[above][Y-1]=='.'){
            ans++;
            above--;
        }
        else can_above = false;
    }
    while(can_left&&(left>=0)){
        if(S[X-1][left]=='.'){
            ans++;
            left--;
        }
        else can_left = false;
    }
     while(can_bellow&&(bellow<H)){
        if(S[bellow][Y-1]=='.'){
            ans++;
            bellow++;
        }
        else can_bellow = false;
    }
     while(can_right&&(right<W)){
        if(S[X-1][right]=='.'){
            ans++;
            right++;
        }
        else can_right = false;
    }

    cout << ans << endl;
    return 0;
}