#include <iostream>
using namespace std;

int main(){
    char c,t;
    cin >> c;
    cin >> t;
    if(c=='Y'){
        t = t + 'A' - 'a';
    }
    cout << t << endl;
    return 0;
}