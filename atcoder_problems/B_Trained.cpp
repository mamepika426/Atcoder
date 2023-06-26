#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> a;
    for(int n=0; n<N; n++) {
        int x; cin >> x;
        a.push_back(x);
    }
    int counter = 0;
    int cur_btn = 0;
    while(counter <= N) {
        int tmp = cur_btn;
        cur_btn = a.at(tmp) - 1; 
        counter++;
        if(cur_btn == 1) {
            break;
        }
    }
    if(counter >= N+1) {
        cout << -1 << endl;
    }
    else {
        cout << counter << endl;
    }
}