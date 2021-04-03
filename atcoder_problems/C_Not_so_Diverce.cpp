#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    vector<int> A(N);
    for(int n=0;n<N;n++) cin >> A[n];
    vector<int> cnt(200003,0);
    for(int n=0;n<N;n++) cnt[A[n]]++;
    int k = 0;
    sort(cnt.begin(),cnt.end());
    reverse(cnt.begin(),cnt.end());
    for(int i=0;i<K;i++) k += cnt[i];
    cout << N - k << endl;
    return 0;  

}