#include <iostream>
using namespace std;


#define SIZE 1000

// 整数を保存するstackクラスを宣言する
class stack {
  int stck[SIZE]; // スタック領域を確保する
  int tos; // スタック先頭の索引
public:
  void init(); // スタックを初期化する
  void push(int n); // スタックに文字をプッシュする
  int pop(); // スタックから文字をポップする
};

// クラス実現部

// スタックを初期化する
void stack::init()
{
  tos = 0;
}

// 文字をプッシュする
void stack::push(int n)
{
  if(tos==SIZE) {
    cout << "スタックは一杯です";
    return;
  }
  stck[tos] = n;
  tos++;
}
// 文字をポップする
int stack::pop()
{
  if(tos==0) {
    cout << "スタックは空です";
    return 0; // スタックが空の場合はヌルを返す
  }
  tos--;
  return stck[tos];
}


int main(){
    int A,B,K;
    cin >> A >> B >> K;
    int m = min(A,B);
    stack st;
    st.init();
    for(int i=1;i<=m;i++){
        if(A%i==0&&B%i==0) st.push(i);
    }
    for(int j=1;j<K;j++) st.pop();
    int ans = st.pop();
    cout << ans << endl;
    return 0;
}