#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


// int main(){
//     string str;
//     getline(cin,str);
//     string divide[4] = {"dream","dreamer","erase","eraser"};
//     reverse(str.begin(),str.end());
//     for(int i=0;i<4;i++){
//         reverse(divide[i].begin(),divide[i].end());
//     }


//     bool can = true;
//     for(int i=0;i<str.size();){
//         bool can_2 = false;
//         for(int j=0;j<4;j++){
//             if(divide[j]==str.substr(i,divide[j].size())){
//                 can_2=1;
//                 i += divide[j].size();
//             }
//         }
//         if(!can_2){
//             can=false;
//             break;
//         }
//     }
//     if(can) cout << "YES" << endl;
//     else cout << "NO" << endl;
//     return 0;
// }


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    string str;
    getline(cin,str);
    string divide[4] = {"dream","dreamer","erase","eraser"};

    bool dp[100010];
    dp[0] = 1;
    for(int i=0;i<str.size();i++){
        if(!dp[i]) continue;
        for(string s:divide){
            if(str.substr(i,s.size())==s){
                dp[i+s.size()] = 1;
            }
        }
    }
//     if(dp[str.size()]) cout << "YES" << endl;
//     else cout << "NO" << endl;
//     return 0;
// }
    cout << (dp[str.size()] ? "YES" : "NO") << endl;
    return 0;
}