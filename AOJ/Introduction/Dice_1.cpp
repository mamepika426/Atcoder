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
    string command;
    cin >> command;
    for(int i=0;i<command.size();i++){
        if(command[i]=='N') dice.rotateN();
        else if(command[i]=='E') dice.rotateE();
        else if(command[i]=='W') dice.rotateW();
        else if(command[i]=='S') dice.rotateS();
    }
    cout << dice.top << endl;
}
