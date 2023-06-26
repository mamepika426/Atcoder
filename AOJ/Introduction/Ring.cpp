#include <iostream>
using namespace std;

int main()
{
    string s,p;
    cin >> s >> p;
    int judge=0,sum;
    for(int i=0;i<s.size();i++){
        sum=0;
        for(int j=0;j<p.size();j++){
            if(s[(i+j)%s.size()] == p[j]) sum += 1;
        }
        if(sum==p.size()) judge = 1;
    }
    if(judge==1) cout << "Yes" << endl;
    else cout << "No" << endl;
}