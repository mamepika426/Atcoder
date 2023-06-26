#include <iostream>
using namespace std;

int main(){
    int N;
    string S;
    cin >> N >> S;

    int num_R = 0;
    for(int n=0;n<N;n++){
        if(S[n]=='R') num_R++;
    }

    int ans=0;
    for(int r=0;r<num_R;r++){
        if(S[r]=='W') ans++;
    }

    cout << ans << endl;
    return 0;
}