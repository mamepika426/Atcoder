#include <iostream>
using namespace std;

int main(){
    int N,X;
    string S;
    cin >> N >> X >> S;

    for(int i=0;i<S.size();i++){
        if(X>0){
            if(S[i]=='o') X++;
            else X--;
        }
        else if(S[i]=='o') X++;
    }

    cout << X << endl;
    return 0;
}