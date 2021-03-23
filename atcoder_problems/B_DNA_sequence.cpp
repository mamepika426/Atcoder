#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    string S;
    cin >> N >> S;
    int ans = 0;
    int a,g,c,t;
    if(N!=1){
        for(int i=0;i<N-1;i++){
            a = g = c = t = 0;
            for(int j=i;j<N;j++){
                if(S[j]=='A') a++;
                else if(S[j]=='G') g++;
                else if(S[j]=='C') c++;
                else t++;
                if(a==t&&c==g) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}