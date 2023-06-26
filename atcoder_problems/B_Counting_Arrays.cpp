#include <iostream>
#include <set>
#include <vector>
using namespace std;

// int main() {
//     int N; cin >> N;
//     set<vector<int>> s;
//     for(int n=0;n<N;n++) {
//         int L; cin >> L;
//         int x; 
//         vector<int> a;
//         for(int l=0; l<L; l++) {
//             cin >> x;
//             a.push_back(x);
//         }
//         s.insert(a);
//     }
//     cout << s.size() << endl;
// }

int main() {
    int N; cin >> N;
    cin.ignore();  // 改行まで読み込む
    set<string> st;
    for(int i=0; i<N; i++) {
        string s;
        getline(cin, s);
        st.insert(s);
    }
    cout << st.size() << endl;
}