#include <iostream>
#include <vector>
using namespace std;

int main(){
    string S;
    cin >> S;
    int num_W = 0;
    for(int n=0;n<S.size();n++){
        if(S[n]=='W') num_W++;
    }
    vector<long long> cum(num_W+1,0);
    int cnt = 0;
    for(int n=0;n<S.size();n++){
        if(S[n]=='W'){
            cum[cnt+1] = cum[cnt];
            cnt++;
        }
        else cum[cnt]++;
    }
    long long ans = 0;
    for(int i=0;i<num_W;i++) ans+=cum[i];
    cout << ans << endl;
    return 0;
}