#include <iostream>
#include <algorithm>
#include <bits/stdc++.h> 
#include <vector>
using namespace std;

int main(){
    vector<int> num(5,0);
    for(int n=0;n<5;n++) cin >> num[n];

    if(num[0]+num[3]<num[1]+num[2]) cout << num[1] + num[2] + num[4] << endl;
    else cout << num[0] + num[3] + num[4] << endl;
    return 0;
}