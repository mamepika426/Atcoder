#include <iostream>
using namespace std;

bool achieve(int x_1,int y_1,int x_2,int y_2,int t){
    int dist = abs(x_1-x_2)+abs(y_1-y_2);
    if(dist>t) return false;
    else{
        if(dist%2==t%2) return true;
        else return false;
    }
}

int main()
{
    int N;
    cin >> N;
    int x[N+1],y[N+1],t[N+1];
    x[0] = y[0] = t[0] = 0;
    for(int i=1;i<=N;i++) cin >> t[i] >> x[i] >> y[i];
    int can=1;
    for(int i=0;i<N;i++){
        if(!achieve(x[i],y[i],x[i+1],y[i+1],t[i+1]-t[i])) can = 0;
    } 
    if(can==1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}