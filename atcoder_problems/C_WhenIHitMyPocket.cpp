#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long K, A, B; cin >> K >> A >> B;
    // ビスケットと日本円を交換できないとき
    if(K < A + 1) cout << K + 1 << endl;
    // ちょうどビスケットと日本円を交換できるとき
    else if(K == A + 1){
        cout << max(A+2, B) << endl;
    }
    // プロセスが複数回の場合
    else{
        // 交換なしのほうが得
        if(A+2 >= B){
            cout << K + 1 << endl;
        }
        // 交換したほうが得
        else{
            // 最初のA+1回
            long long ans = B;

            // 残りのK-A-1回について
            long long n_process = (K - A - 1) / 2;
            long long remainder = (K - A - 1) % 2;
            ans += (B - A) * n_process + remainder;
            cout << ans << endl;
        }
    }
    return 0;
}
