#include <iostream>
using namespace std;

int main(void)
{
    int n,x,cnt=0;
    cin >> n >> x;
    while(!((n==0)&&(x==0))){
        cnt = 0;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                int k = x - i - j;
                if((j<k)&&(k<=n)) cnt += 1;
            }
        }
        cout << cnt << endl;
        cin >> n >> x;
    }
    return 0;
}

// int main() {
//     int N, X, ans = 0;
//     cin >> N >> X;
//     for (int i = 1; i <= N; i++) {
//         for (int j = i + 1; j <= N; j++) {
//             int k = X - i - j;
//             if (j < k && k <= N) ans += 1;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }