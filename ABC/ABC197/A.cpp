#include <iostream>
using namespace std;

int main(){
    string S;
    cin >> S;
    char tmp1 = S[0];
    S[0] = S[1];
    S[1] = S[2];
    S[2] = tmp1;
    cout << S << endl;
    return 0;
}