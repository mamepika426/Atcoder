#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for(int n=0;n<N;n++) cin >> a[n];
    vector<int> cnt(pow(10,5)+5,0);
    int ans = 0;
    for(int n=0;n<N;n++){
        if(a[n]==0){
            ans++;
            cnt[a[n]]++;
            cnt[a[n]+1]++;
        }
        else{
            cnt[a[n]]++;
            cnt[a[n]+1]++;
            cnt[a[n]-1]++;
        } 
    }
    for(int n=0;n<pow(10,5)+2;n++){
        if(ans<cnt[n]) ans = cnt[n];
    }
    cout << ans << endl;
    return 0;
}