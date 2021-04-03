#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> choices(N,1);
    for(int n=0;n<N;n++) cin >> A[n];
    //ここまでで入力終わり

    for(int n=0;n<N;n++){
        if(A[n]%2==0) choices[n] = 2;
    }
    int odd = 1;
    for(int n=0;n<N;n++) odd = odd*choices[n];
    int ans = pow(3,N);
    ans -= odd;
    cout << ans << endl;
    return 0;

}