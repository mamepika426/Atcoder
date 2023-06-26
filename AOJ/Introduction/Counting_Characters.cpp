#include <iostream>
#include <string>
using namespace std;

void out(int *);

int main()
{
    int cnt[26];
    for(int j=0;j<26;j++){
        cnt[j]=0;
    }
    string text;
    while(getline(cin,text)){
        for(int i=0;i<text.size();i++){
            for(int j=0;j<26;j++){
                char c = 'a'+j;
                char C = 'A'+j;
                if(text[i]==c||text[i]==C) cnt[j] += 1;
            }
        }
    }
    out(&cnt[0]);
    return 0;
}

void out(int *cnt){
    for(int j=0;j<26;j++){
        char c = 'a'+j;
        cout << c << " : " << cnt[j] << endl;
    }
}