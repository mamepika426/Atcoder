#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

//区間をpair<int,int>で表す
using Interval = pair<int,int>;

//区間を終端時刻で大小比較する関数
bool cmp(const Interval &a,const Interval &b){
    return a.second < b.second;
}

int main(){
    int N;
    cin >> N;
    vector<Interval> inter(N);
    for(int n=0;n<N;n++) cin >> inter[n].first >> inter[n].second;
    //終端時刻が早い順にソート
    sort(inter.begin(),inter.end(),cmp);
    //貪欲に選ぶ
    bool can = true;
    int current_end_time = 0;
    for(int n=0;n<N;n++){
        //最後に選んだ区間と被るのは除く
        if(current_end_time+inter[n].first<=inter[n].second){ 
            current_end_time += inter[n].first;
        }
        else can = false;
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;

}