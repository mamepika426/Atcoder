#include <iostream>
#include <set>
using namespace std;

int main() {
    int A, B, C; cin >> A >> B >> C;
    set<int> mods;
    int mod = A % B;
    while(true)  {
        if(mods.find(mod) != mods.end()) break;
        mods.insert(mod);
        mod = (mod + A) % B;
    }
    if(mods.find(C) != mods.end()) cout << "YES" << endl;
    else   cout << "NO" <<endl;
    return 0;
    // for(auto iter : mods) {
    //     cout << iter << endl;
    // }
}