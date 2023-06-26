#include <iostream>
#include <cmath>
using namespace std;

const long long mod_num = pow(10,9)+7;

int main(){
    long long X,Y,Z,ans=0;
    cin >> X >> Y >> Z;
    ans = (((X*Y)%mod_num)*Z)%mod_num;
    cout << ans << endl;
    return 0;

}