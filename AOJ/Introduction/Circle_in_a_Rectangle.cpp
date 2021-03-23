#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int W,H,x,y,r;
    cin >>W >>H >>x >>y >>r;
    int left = x - r;
    int right = x + r;
    int top = y + r;
    int bottom = y - r;
    if(left>=0 && right<=W && top<=H && bottom >=0){
        cout <<"Yes" <<endl;
    } 
    else{
        cout <<"No"<<endl;
    }
}