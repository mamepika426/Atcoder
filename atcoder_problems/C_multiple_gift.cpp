#include <iostream>
using namespace std;

int main(){
    long long X,Y;
    cin >> X >> Y;
    long long now = X;
    int ans = 1;
    while(now*2<=Y){
        now = now*2;
        ans++;
    }
    cout << ans << endl;
    return 0;
}