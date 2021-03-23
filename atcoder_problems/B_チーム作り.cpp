#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans;
    if((n%40)<=20) ans = n%40;
    else ans = 41 - (n%40);
    cout << ans << endl;
    return 0;
}