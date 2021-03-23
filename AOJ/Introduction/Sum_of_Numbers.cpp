#include <iostream>
using namespace std;

int main(){
    int sum=0;
    string s;
    while(1){
        cin >> s;
        sum = 0;
        for(int i=0;i<s.size();i++){
            sum+=s[i]-'0';
        }
        if(sum==0) break;
        else{
            cout << sum << endl;
        }
    }
}
