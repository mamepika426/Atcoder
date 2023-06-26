#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> starting_indices_AC(int N, string S) {
    vector<int> indices;
    for(int index=0; index < N-1; index++) {
        if(S.substr(index, 2) == "AC"){
            indices.push_back(index);
        }
    }
    return indices;
}

int main() {
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;

    vector<int> ok_indices = starting_indices_AC(N, S);

    for(int q=0; q<Q; q++) {
        // int ans = 0;
        int l, r; cin >> l >> r;
        // for(int index=l-1; index < r-1; index++) {
        //     if(ok_indices.find(index) != ok_indices.end()) ans++;
        // }
        auto iter1 = lower_bound(ok_indices.begin(), ok_indices.end(), l-1);
        auto iter2 = upper_bound(ok_indices.begin(), ok_indices.end(), r-2);
        // auto val1 = iter1 - ok_indices.begin();
        // auto val2 = iter2 - ok_indices.begin();
        int ans = iter2 - iter1;
        cout << ans << endl;
    }
    return 0;
}