#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N;
    int x,y,t;
    int x_before = 0,y_before=0,t_before=0;
    bool can = true;
    cin >> N;
    for(int n=0;n<N;n++){
        cin >> t >> x >> y;
        int x_dis = abs(x-x_before);
        int y_dis = abs(y-y_before);
        int t_dis = t-t_before;
        int vertical = t_dis - x_dis;
        can = (vertical>=0&&vertical-y_dis>=0&&(vertical-y_dis)%2==0);
        x_before = x;
        y_before = y;
        t_before = t; 
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}