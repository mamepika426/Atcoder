#include <iostream>
#include <cmath>
using namespace std;

const int mod = pow(10, 9) + 7;

long long factorial(int);

int main() {
    int N, M; cin >> N >> M;
    long long N_factorial = factorial(N);
    long long M_factorial = factorial(M);
    if(N == M) {
        cout << (2 * N_factorial * M_factorial) % mod << endl;
    }
    else if( abs(N - M) == 1) {
        cout << (N_factorial * M_factorial) % mod << endl;
    }
    else cout << 0 << endl;
    return 0;
}

long long factorial(int K) {
    long long ans = 1;
    for(int k = 1; k <= K; k++) {
        ans *= k; 
        ans = ans % mod;
    }
    return ans;
}