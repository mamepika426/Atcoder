#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

// 辞書をvector<pair<S, T>> に変換してvalueについてソートする
// https://www.geeksforgeeks.org/sorting-a-map-by-value-in-c-stl/
bool cmp(pair<int, int> &a, pair<int, int> &b) {
    return a.second > b.second;
}

vector<pair<int, int>> sort(map<int, int> &M) {
    vector<pair<int, int>> A;
    for(auto& iter : M) {
        A.push_back(iter);
    }
    sort(A.begin(), A.end(), cmp);
    return A;
}

int main() {
    int N; cin >> N;
    int n_odd_indices = N / 2 + N % 2;
    int n_even_indices = N / 2;
    // 偶数番目、奇数番目の要素に分割して、要素をキー、出現回数を値に持つ辞書を作成
    map<int, int> map_odd;
    map<int, int> map_even;
    for(int n=0; n<N; n++) {
        int v; cin >> v;
        if(n%2 == 0){
            if(map_even.find(v) != map_even.end()) {
                map_even[v] += 1;
            }
            else {
                map_even[v] = 1;
            }
        }
        else {
            if(map_odd.find(v) != map_odd.end()) {
                map_odd[v] += 1;
            }
            else {
                map_odd[v] = 1;
            }
        }
    }
    vector<pair<int, int>> map_even_sorted = sort(map_even);
    vector<pair<int, int>> map_odd_sorted = sort(map_odd);
    // reverse(map_even_sorted, map_even_sorted + map_even_sorted.size());
    // reverse(map_odd_sorted, map_odd_sorted + map_odd_sorted.size());

    int n_fix_even1 = n_even_indices - map_even_sorted[0].second;
    int n_fix_even2 = n_even_indices;
    if(map_even_sorted.size() > 1) n_fix_even2 = n_fix_even2 - map_even_sorted[1].second;
    int n_fix_odd1 = n_odd_indices - map_odd_sorted[0].second;
    int n_fix_odd2 = n_odd_indices;
    if(map_odd_sorted.size() > 1) n_fix_odd2 = n_fix_odd2 - map_odd_sorted[1].second;

    if(map_even_sorted[0].first == map_odd_sorted[0].first) {
        if(n_fix_even2 - n_fix_even1 > n_fix_odd2 - n_fix_even1) {
            n_fix_odd1 = n_fix_odd2;
        }
        else {
            n_fix_even1 = n_fix_even2;
        }
    }
    cout << n_fix_even1 + n_fix_odd1 << endl;
    return 0;
}