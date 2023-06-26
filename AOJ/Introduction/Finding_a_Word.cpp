#include <iostream>
using namespace std;

bool same(string,string);

int main()
{
    string w,text;
    cin >> w;
    int cnt = 0;
    while(1){
        cin >> text;
        if(text=="END_OF_TEXT") break;
        else if(same(w,text)) cnt += 1;
    }
    cout << cnt << endl;
    return 0;
}

bool same(string s1,string s2)
{
    if(s1.size()!=s2.size()) return false;
    else{
        int c[s1.size()];
        int judge = 0;
        for(int i=0;i<s1.size();i++){
            c[i] = 0;
        }
        for(int i=0;i<s1.size();i++){
            if(s1[i]==s2[i]||s1[i]+'A'-'a'==s2[i]||s1[i]==s2[i]+'A'-'a') judge += 1;
        }
        if(judge==s1.size()) return true;
        else return false;
    }
}