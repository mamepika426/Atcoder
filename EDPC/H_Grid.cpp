#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const long long mod_num = 1e9 + 7;

int main(){
    int H,W;
    cin >> H >> W;
    vector<vector<char>> a(H,vector<char>(W));
    for(int h=0;h<H;h++){
        for(int w=0;w<W;w++) cin >> a[h][w];
    }
    
    vector<vector<long long>> dp(H,vector<long long>(W,0));
    dp[0][0] = 1;

    //なぜか動かん
    // for(int w=1;w<W;w++){
    //     if(a[0][w]=='.'){
    //         dp[0][w] = dp[0][w-1];
    //     }
    //     else dp[0][w] = 0;
    // }
    
    // for(int h=1;h<H;h++){
    //     if(a[h][0]=='.'){
    //         dp[h][0] = dp[h-1][0];
    //     }
    // }

    // for(int h=0;h<H-1;h++){
    //     for(int w=0;w<W-1;w++){
    //         if(a[h][w]=='.'){
    //             dp[h+1][w+1] = (dp[h][w+1] + dp[h+1][w])%mod_num; 
    //         }
    //     }
    // }


    //ここから
	for (int i = 0; i < H; i++)
		for (int j = 0; j < W; j++){
			dp[0][0] = 1;
			if (a[i][j] == '#')
				dp[i][j] = 0;
			else if (i == 0)
				dp[i][j] = dp[i][j - 1];
			else if (j == 0)
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod_num;
		}

    //ここまで




    cout << dp[H-1][W-1] << endl;
    return 0;
}

