#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int S,h,m,s;
    cin >> S;
    h = S/3600;
    S = S%3600;
    m = S/60;
    s = S%60;
    cout << h << ":" << m << ":" << s << "\n";
    return 0;
}