#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long N;
    cin >> N;
    int digit = 0;
    long long tmp = N;
    while(tmp>0){
        digit++;
        tmp = tmp/10;
    }
    long long tmp2 = N; 
    vector<int> digit_nums(digit);
    for(int d=0;d<digit;d++){
        digit_nums[d]=tmp2%10;
        tmp2 = tmp2/10;
    }
    int ans1 = 0; 
    for(int d=0;d<digit;d++) ans1 += digit_nums[d];
    int ans2 = (digit_nums[digit-1]-1)+9*(digit-1);
    int ans = max(ans1,ans2);
    cout << ans << endl;
    return 0;
}