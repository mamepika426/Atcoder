#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int N; cin >> N;
    set<string> set;
    int min_cnt = 0;
    int max_cnt = 0;
    
    // if(N == 1) {
    //     cout  << 1 << " " << 1 << endl;
    //     return 0;
    // }
    for(int n = 0; n < N; n++){
        int a; cin >> a;
        if(1 <= a && a <= 399) set.insert("gray");
        else if(400 <= a && a <= 799) set.insert("brown");
        else if(800 <= a && a <= 1199) set.insert("green");
        else if(1200 <= a && a <= 1599) set.insert("skyblue");
        else if(1600 <= a && a <= 1999) set.insert("blue");
        else if(2000 <= a && a <= 2399) set.insert("yellow");
        else if(2400 <= a && a <= 2799) set.insert("orange");
        else if(2800 <= a && a <= 3199) set.insert("red");
        else{
            min_cnt = 1;
            max_cnt++;
        }
    }
    cout << max(min_cnt, static_cast<int>(set.size())) << " " << set.size() + max_cnt << endl;
}