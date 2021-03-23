#include <iostream>
using namespace std;

int price(int a,int b,int ab,int A,int B,int C){
    return a*A + b*B + ab*C;
}

int main(){
    int A,B,C,X,Y;
    cin >> A >> B >> C >> X >> Y;
    int ans = A*X + B*Y;
    for(int i=0;i<=X;i++){
        int ab = 2*(X-i);
        if(Y-ab/2<=0){
            if(ans>price(i,0,ab,A,B,C)) ans = price(i,0,ab,A,B,C);
        }
        else{
            if(B<2*C){
               if(ans>price(i,Y-ab/2,ab,A,B,C)) ans = price(i,Y-ab/2,ab,A,B,C);
            }
            else{
               if(ans>price(i,0,ab+2*(Y-ab/2),A,B,C)) ans = price(i,0,ab+2*(Y-ab/2),A,B,C);
            }
        }
    }
    cout << ans << endl;
    return 0;
}