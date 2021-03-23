#include <iostream>
using namespace std;

void shuffle(string,int);

int main()
{
    string c;
    int n,s=0,temp;
    cin >> c >> n;
    while(c!="-"){
        for(int i=0;i<n;i++){
            cin >> temp;
            s+=temp;
        } 
        shuffle(c,s);
        cin >> c >> n;
        s=0;
    }
    return 0;
}

void shuffle(string c,int s)
{
    string c_pre = c;
    for(int i=0;i<c.size();i++){
        c[i] = c_pre[(i+s)%c.size()];
    }
    cout << c << endl;
}