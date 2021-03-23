#include <iostream>
using namespace std;

int main(){
    string S;
    getline(cin,S);
    int ans = 0;
    int len = 0;
    char ACGT[4] = {'A','C','G','T'};
    for(int i=0;i<S.size();i++){
        bool match = false;
        for(int j=0;j<4;j++){
            if(S[i]==ACGT[j]) match = true;
        }
        if(match){
            len++;
            if(ans<len) ans = len;
        }
        else len = 0;
    }
    cout << ans << endl;
    return 0;
}