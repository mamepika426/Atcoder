#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    long long N,K;
    cin >> N >> K;
    vector<long long> a(N,0),b(N,0);
    for(int n=0;n<N;n++) cin >> a[n];
    for(int n=0;n<N;n++) cin >> b[n];
    //ここまでで入力終わり

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    long long C = a[N-1]*b[N-1];
    long long left = 0,right=C;
    long long cnt1 = 0;
    long long cnt2 = 0;
    long long ans = 0;
    while(right-left>1){
        cnt2 = 0;
        long long mid = (left+right)/2;
        for(int n = 0;n<N;n++){
            auto iter2 = upper_bound(b.begin(),b.end(),(double) mid/a[n]);
            int val2 = iter2-b.begin();
            cnt2 += val2;
        }
        if(cnt2>=K) right = mid;
        else left = mid;
        ans = right;
    }

    cout << ans << endl;
    return 0;

}