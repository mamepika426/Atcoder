#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

set<char> s2set(string s) {
    set<char> set;
    for(int i = 0; i < s.size(); i++) {
        set.insert(s[i]);
    }
    return set;
}

int main() {
    int N; cin >> N;
    string S; cin >> S;
    int ans = 0;

    for(int n = 1; n < N; n++) {
        string s1 = S.substr(0, n);
        string s2 = S.substr(n, N-n);
        set<char> set1 = s2set(s1);
        set<char> set2 = s2set(s2);
        set<char> intersect;
        set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(intersect, intersect.end()));
        if(intersect.size() > ans) ans = intersect.size(); 
    }
    cout << ans << endl;
    return 0;
}
