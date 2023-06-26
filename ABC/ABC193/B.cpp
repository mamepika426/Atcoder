#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N),P(N),X(N);
    for(int n=0;n<N;n++) cin >> A[n] >> P[n] >> X[n];
    int ans = pow(10,9)+1;
    for(int n=0;n<N;n++){
        if(A[n]<X[n]&&P[n]<ans) ans = P[n];
    }
    if(ans!=pow(10,9)+1) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}