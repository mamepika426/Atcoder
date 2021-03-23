#include <iostream>
using namespace std;

int yoko(string *S,int H,int W){
    int ans_1=0;
    for(int h=0;h<H;h++){
        for(int w=0;w<W-1;w++){
            if(S[h][w]=='.'&&S[h][w+1]=='.') ans_1++;
        }
    }
    return ans_1;
}

int tate(string *S,int H,int W){
    int ans_2=0;
    for(int h=0;h<H-1;h++){
        for(int w=0;w<W;w++){
            if(S[h][w]=='.'&&S[h+1][w]=='.') ans_2++;
        }
    }
    return ans_2;
}

int main(){
    int H,W;
    cin >> H >> W;
    string S[H];
    for(int h=0;h<H;h++) cin >> S[h];
    int ans=0;
    ans += yoko(&S[0],H,W);
    ans += tate(&S[0],H,W);
    cout << ans << endl;
    return 0;
}