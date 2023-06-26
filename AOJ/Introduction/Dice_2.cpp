#include <iostream>
using namespace std;

class Dice
{
public:
    int top;
    int front;
    int right;
    int left;
    int back;
    int bottom;
    string rotates = "EEESEEENEEENWWWNEEENEEE";

    Dice(int a,int b,int c,int d,int e,int f){
        top = a;
        front = b;
        right = c;
        left = d;
        back = e;
        bottom = f;
    }

    void rotateN(){
        int tmp = Dice::top;
        top = Dice::front;
        front = Dice::bottom;
        bottom = Dice::back;
        back = tmp;
    }
    void rotateE(){
        int tmp = Dice::top;
        top = Dice::left;
        left = Dice::bottom;
        bottom = Dice::right;
        right = tmp;
    }
    void rotateS(){
        int tmp = Dice::top;
        top = Dice::back;
        back = Dice::bottom;
        bottom = Dice::front;
        front = tmp;
    }
    void rotateW(){
        int tmp = Dice::top;
        top = Dice::right;
        right = Dice::bottom;
        bottom = Dice::left;
        left = tmp;
    }
};

int main()
{
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    Dice dice(a,b,c,d,e,f);
    int n;
    cin >> n;

    for(int m=0;m<n;m++){
        int t,f,ans;
        cin >> t >> f;
        if(dice.top==t&&dice.front==f) ans = dice.right;
        for(int i=0;i<dice.rotates.size();i++){
            if(dice.rotates[i]=='N') dice.rotateN();
            else if(dice.rotates[i]=='E') dice.rotateE();
            else if(dice.rotates[i]=='W') dice.rotateW();
            else if(dice.rotates[i]=='S') dice.rotateS();

            if(dice.top==t&&dice.front==f) ans = dice.right;
        }
        cout << ans << endl;
    }
    return 0;
}
