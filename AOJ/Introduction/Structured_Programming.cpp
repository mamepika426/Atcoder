#include <iostream>
using namespace std;

// void call(int);

// int main(void){
//     int n;
//     cin >> n;
//     call(n);
//     return 0;
// }

// void call(int n){
//   int i = 1;
//  CHECK_NUM:
//   int x = i;
//   if ( x % 3 == 0 ){
//     cout << " " << i;
//     goto END_CHECK_NUM;
//   }
//  INCLUDE3:
//   if ( x % 10 == 3 ){
//     cout << " " << i;
//     goto END_CHECK_NUM;
//   }
//   x /= 10;
//   if ( x ) goto INCLUDE3;
//  END_CHECK_NUM:
//   if ( ++i <= n ) goto CHECK_NUM;

//   cout << endl;
// }

int main(void)
{
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        if(i%3==0){
            cout << " " << i;
        }
        else {
            int x = i;
            while(x/10 != 0||x==3){
                if(x%10 == 3){
                    cout << " " << i;
                    break;
                }
                x = x/10;
            }
        }
    }
    cout << endl;
}