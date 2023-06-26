#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    long long ans = 0;
    for (int n = 1; n < N; n++) {
        ans += n;
    }
    cout << ans << endl;
    return 0;
}