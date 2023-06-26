#include <iostream>
#include <deque>
using namespace std;

int main() {
    int Q; cin >> Q;
    deque<int> deq;

    int query, position;
    for(int q=0; q<Q; q++) {
        cin >> query >> position;
        if(query == 0) {
            int x; cin >> x;
            if(position == 0) {
                deq.push_front(x);
            }
            else {
                deq.push_back(x);
            }
        }
        else if(query == 1) {
            cout << deq.at(position) << endl;
        }
        else {
            if(position == 0) {
                deq.pop_front();
            }
            else {
                deq.pop_back();
            }
        }
    }
}