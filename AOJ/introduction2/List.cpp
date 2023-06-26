#include <iostream>
#include <list>
using namespace std;

int main() {
    int Q; cin >> Q;
    list<int> lst;
    auto iter = lst.begin();
    for(int q = 0; q < Q; q++) {
        int query; cin >> query;
        if(query == 0) {
            // if(iter != lst.begin()) iter--;
            int x; cin >> x;
            lst.insert(iter, x);
            iter--;
        }
        else if(query == 1) {
            int x; cin >> x;
            if(x >= 0) {
                while(x != 0) {
                    iter++;
                    x--;
                }
            }
            else {
                while(x != 0) {
                    iter--;
                    x++;
                }
            }
        }
        else {
            iter = lst.erase(iter);
        }
    }
    iter = lst.begin();
    for(auto iter = lst.begin(); iter != lst.end(); ++iter) {
        cout << *iter << endl;
    }
    return 0;
}