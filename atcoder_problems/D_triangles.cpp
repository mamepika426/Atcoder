#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> L(N);
    for (int n = 0; n < N; n++) {
        cin >> L[n];
    }
    // 降順ソート(今回はいらない)
    // sort(L.begin(), L.end(), greater<int>{});
    sort(L.begin(), L.end());
    long long ans = 0;
    for(int a = 0; a < N - 2; a++) {
        // lower_boundのためのiterを用意し、a要素目を指す
        auto iter = L.begin();
        for(int i = 0; i < a; i++) ++iter;
        for(int b = a + 1; b < N - 1; b++) {
            ++iter;
            auto iter_ub = upper_bound(iter, L.end(), L[a] + L[b] - 1);
            auto val = iter_ub - iter - 1;
            ans += val;
        }
    }
    cout << ans << endl;
}