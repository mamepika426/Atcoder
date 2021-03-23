#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
    int N;
    cin >> N;
    long long a[3*N];
    for(int n=0;n<3*N;n++) cin >> a[n];

    sort(a,a+3*N,greater<int>());
    long long ans = 0;
    for(int n=0;n<N;n++) ans += a[2*n+1];
    cout << ans << endl;
    return 0;

}