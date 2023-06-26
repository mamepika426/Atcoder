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

bool six_faces(Dice,Dice);
bool isSame(Dice,Dice);

int main()
{
    int a1,b1,c1,d1,e1,f1;
    int a2,b2,c2,d2,e2,f2;
    cin >> a1 >> b1 >> c1 >> d1 >> e1 >> f1;
    cin >> a2 >> b2 >> c2 >> d2 >> e2 >> f2;
    Dice dice1(a1,b1,c1,d1,e1,f1);
    Dice dice2(a2,b2,c2,d2,e2,f2);
    if(isSame(dice1,dice2)) cout << "Yes" << endl;
    else cout << "No" << endl;
}

bool six_faces(Dice dice1,Dice dice2){
    if(dice1.top==dice2.top&&dice1.front==dice2.front&&dice1.right==dice2.right&&dice1.left==dice2.left&&dice1.back==dice2.back&&dice1.bottom==dice2.bottom) return true;
    else return false;
}

bool isSame(Dice dice1,Dice dice2){
    int judge=0;
    if(six_faces(dice1,dice2)) judge=1;
    else{
       for(int i=0;i<dice1.rotates.size();i++){
            if(dice1.rotates[i]=='N') dice1.rotateN();
            else if(dice1.rotates[i]=='E') dice1.rotateE();
            else if(dice1.rotates[i]=='W') dice1.rotateW();
            else if(dice1.rotates[i]=='S') dice1.rotateS();

            if(six_faces(dice1,dice2)) judge=1;
        }
    }
    if(judge==1) return true;
    else return false;
}