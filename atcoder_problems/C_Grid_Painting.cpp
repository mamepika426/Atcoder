#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int H,W;
    cin >> H >> W;
    vector<string> s(H);
    for(int h=0;h<H;h++){
        cin >> s[h];
    }
    bool can = true;
    //1マスを塗る場合
    if(H==1&&W==1){
        can=(s[0][0]=='.');
    }
    //1行を塗る場合
    else if(H==1){
        //両端の確認
        if(s[0][0]=='#'){
            if(s[0][1]=='.') can=false;
        }
        if(s[0][W-1]=='#'){
            if(s[0][W-2]=='.') can=false;
        }
        //それ以外
        for(int w=1;w<W-1;w++){
            if(s[0][w]=='#'){
                if(s[0][w-1]=='.'&&s[0][w+1]=='.') can = false;
            }
        }    
    }
    //1列を塗る場合
    else if(W==1){
        //両端の確認
        if(s[0][0]=='#'){
            if(s[1][0]=='.') can=false;
        }
        if(s[H-1][0]=='#'){
            if(s[H-2][0]=='.') can=false;
        }
        //それ以外
        for(int h=1;h<H-1;h++){
            if(s[h][0]=='#'){
                if(s[h-1][0]=='.'&&s[h+1][0]=='.') can = false;
            }
        }        
    }
    //それ以外
    else{
        for(int h=0;h<H;h++){
            for(int w=0;w<W;w++){
                //1行目
                if(h==0){
                    if(w==0&&s[0][0]=='#'){
                        if(s[0][1]=='.'&&s[1][0]=='.') can = false;
                    }
                    else if(w==W-1&&s[0][W-1]=='#'){
                        if(s[0][W-2]=='.'&&s[1][W-1]=='.') can = false;
                    }
                    else{
                        if(s[0][w]=='#'){
                            if(s[0][w-1]=='.'&&s[0][w+1]=='.'&&s[1][w]=='.') can = false;
                        }
                    }
                }
                else if(h==H-1){
                    if(w==0&&s[H-1][0]=='#'){
                        if(s[H-1][1]=='.'&&s[H-2][0]=='.') can = false;
                    }
                    else if(w==W-1&&s[H-1][W-1]=='#'){
                        if(s[H-1][W-2]=='.'&&s[H-2][W-1]=='.') can = false;
                    }
                    else{
                        if(s[H-1][w]=='#'){
                            if(s[H-1][w-1]=='.'&&s[H-1][w+1]=='.'&&s[H-2][w]=='.') can = false;
                        }
                    }
                }
                else{
                    if(w==0&&s[h][0]=='#'){
                        if(s[h][1]=='.'&&s[h-1][0]=='.'&&s[h+1][0]=='.') can = false;
                    }
                    else if(w==W-1&&s[h][W-1]=='#'){
                        if(s[h][W-2]=='.'&&s[h-1][W-1]=='.'&&s[h+1][W-1]=='.') can = false;
                    }
                    else{
                        if(s[h][w]=='#'){
                            if(s[h][w-1]=='.'&&s[h][w+1]=='.'&&s[h-1][w]=='.'&&s[h+1][w]=='.') can = false;
                        }
                    }
                }
            }
        }
    }





    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}