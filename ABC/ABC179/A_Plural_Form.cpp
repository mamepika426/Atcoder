#include <iostream>
using namespace std;

int main()
{
    string s,ans;
    cin >> s;
    if(s[s.size()-1]=='s') ans = s+"es";
    else ans = s+"s";
    cout << ans << endl;
    return 0;
}