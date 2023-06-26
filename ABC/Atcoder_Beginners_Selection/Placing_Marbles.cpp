#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') ans++;
    }
    cout << ans;
    return 0;
}