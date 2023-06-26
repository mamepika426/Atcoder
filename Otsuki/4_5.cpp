#include <iostream>
#include <vector>
using namespace std;

// int num_digits(long long n){
//     int digits = 0;
//     while(n>0){
//         digits++;
//         n /= 10;
//     }
//     return digits;
// }


// bool is_753(int* n_to_digits,int digits){
//     bool three,five,seven = false;
//     bool exists_other = false;
//     for(int d=0;d<digits;d++){
//         if(n_to_digits[d]==3) three = true;
//         else if(n_to_digits[d]==5) five = true;
//         else if(n_to_digits[d]==7) seven = true;
//         else exists_other = true;
//     }
//     return three&&five&&seven&&(!exists_other);
// }

// int sum(vector<int> v){
//     int ans = 0;
//     for(auto itr=v.begin();itr!=v.end();itr++){
//         ans += *itr;
//     }
//     return ans;
// }

// int main(){
//     long long N;
//     cin >> N;

//     vector<int> numbers753(N+1);
//     numbers753.assign(N+1,0);
//     for(long long n=357;n<=N;n++){
//         int digits = num_digits(n);
//         int n_to_digits[digits];
//         int tmp = n;
//         for(int d=0;d<digits;d++){
//             n_to_digits[d] = tmp%10;
//             tmp = tmp/10;
//         }
//         if(is_753(&n_to_digits[0],digits)) numbers753[n] = 1;
//     }
//     cout << sum(numbers753) << endl;
//     return 0;
// }


void func(long long cur,long long N,int use,int &cnt){
    if(cur>N) return;
    else{
        if(use==0b111) cnt++;
        func(10*cur+3,N,use|0b001,cnt);
        func(10*cur+5,N,use|0b010,cnt);
        func(10*cur+7,N,use|0b100,cnt);
    }
}

int main(){
    long long N;
    cin >> N;
    int cnt = 0;
    func(0,N,0,cnt);
    cout << cnt << endl;
    return 0;
}