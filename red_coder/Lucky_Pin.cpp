#include <iostream>
using namespace std;

bool code(int *num,string S){
    int f=0;
    for(int j=0;j<S.size();j++){
        if(S[j]==('0'+num[f])) f++;
        if(f==3) break;
    }
    if(f==3) return true;
    else return false;
}


int main(){
    int N,ans=0;
    string S;
    cin >> N >> S;
    for(int a=0;a<10;a++){
        for(int b=0;b<10;b++){
            for(int c=0;c<10;c++){
                int num[3] = {a,b,c};
                if(code(&num[0],S)) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}