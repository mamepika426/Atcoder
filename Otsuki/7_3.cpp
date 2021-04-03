#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
using Interval = pair<int,int>;

bool cmp_x(const Interval &a,const Interval &b){
    return a.first < b.first;
}
bool cmp_y(const Interval &a,const Interval &b){
    return a.second < b.second;
}
int main(){
    int N;
    cin >> N;
    vector<Interval> red(N),blue(N);
    for(int n=0;n<N;n++) cin >> red[n].first >> red[n].second;
    for(int n=0;n<N;n++) cin >> blue[n].first >> blue[n].second;

    int ans = 0;
    //青い点をx座標の小さい順にソート
    sort(blue.begin(),blue.end(),cmp_x);
    //すでにペアになっている赤い点を記録
    vector<bool> already_choosed(N,false);
    for(int n1=0;n1<N;n1++){
        int y_max_red = -1;
        int choose = -1;
        for(int n2=0;n2<N;n2++){
            if(cmp_x(red[n2],blue[n1])&&cmp_y(red[n2],blue[n1])&&y_max_red<red[n2].second&&!already_choosed[n2]){
                y_max_red = red[n2].second;
                choose = n2;
            }
        }
        if(choose!=-1){
            already_choosed[choose] = true;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}