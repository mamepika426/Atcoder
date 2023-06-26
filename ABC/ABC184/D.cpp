#include <iostream>
using namespace std;

int A,B,C;
double dp[102][102][102];
bool flag[102][102][102];
//---------------------------------------------------------------------------------------------------

double f(int a,int b,int c){
    if(flag[a][b][c]) return dp[a][b][c];
    flag[a][b][c] = true;
    double fans = 0;
    if(a<100) fans += f(a+1,b,c)*(double)(a/(a+b+c));
    if(b<100) fans += f(a,b+1,c)*(double)(b/(a+b+c));
    if(c<100) fans += f(a,b,c+1)*(double)(c/(a+b+c));
    return dp[a][b][c] = fans;
}

int main(){
    cin >> A >> B >> C;
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100;j++){
            dp[i][j][100] = 1;
            dp[100][i][j] = 1;
            dp[j][100][i] = 1;
            flag[i][j][100] = true;
            flag[100][i][j] = true;
            flag[j][100][i] = true;
        }
    }
    double ans = f(A,B,C);
    printf("%.7f",ans);
    return 0;
}

