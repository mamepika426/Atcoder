#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z') printf("%c",s[i]-('a'-'A'));
        else if(s[i]>='A'&&s[i]<='Z') printf("%c",s[i]-('A'-'a'));
        else printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}

