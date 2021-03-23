#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N),B(N);
    for(int n=0;n<N;n++) cin >> A[n] >> B[n];
    long long ans = 1LL<<60;
    for(int n1=0;n1<N;n1++){
        int time_a = A[n1];
        for(int n2=0;n2<N;n2++){
            int time_b=B[n2];
            int time_sum;
            if(n1==n2) time_sum = time_a + time_b;
            else time_sum = max(time_a,time_b);

            if(time_sum<ans) ans = time_sum;
        }
    }
    cout << ans << endl;
    return 0;

}