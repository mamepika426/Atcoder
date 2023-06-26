#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const long long inf = 1LL << 60;

int main(){
    int N;
    cin >> N;
    vector<long long> H(N),S(N);
    for(int n=0;n<N;n++) cin >> H[n] >> S[n];

    long long left = 0,right = inf;
    while(right-left>1){
        long long mid = (right+left)/2;

        bool ok = true;
        vector<long long> t(N,0);
        for(int n=0;n<N;n++){
            if(H[n]>mid) ok = false;
            else{
                t[n] = (mid-H[n])/S[n];
            }
        }
        sort(t.begin(),t.end());
        for(int n=0;n<N;n++){
            if(t[n]<n) ok=false;
        }
        if(ok) right = mid;
        else left = mid;
    }
    cout << right << endl;
    return 0;
}