#include <iostream>
using namespace std;

int main(){
    string S;
    cin >> S;
    bool diff = true;
    for(int n=0;n<S.size();n++){
        if(n%2==1) diff = diff&&(isupper(S[n]));
        else diff=diff&&(islower(S[n]));
    }
    if(diff) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}