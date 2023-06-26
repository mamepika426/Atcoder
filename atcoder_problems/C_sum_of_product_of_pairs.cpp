#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const long long mod_num = pow(10,9)+7;

int main(){
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int n=0;n<N;n++) cin >> A[n];

    vector<long long> cum(N+1,0);
    for(int n=0;n<N;n++) cum[n+1] = (cum[n] + A[n]);

    long long ans = 0;
    for(int n=0;n<N-1;n++){
        ans  += A[n]*((cum[N]-cum[n+1])%mod_num);
        ans = ans%mod_num;
    }
    cout << ans << endl;
    return 0;
}