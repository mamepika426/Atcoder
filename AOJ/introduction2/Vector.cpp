#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n_queries, query, x;
    cin >> n_queries;
    vector<int> a;
    for (int q = 0; q < n_queries; q++) {
        cin >> query;
        if(query==0) {
            cin >> x;
            a.push_back(x);
        }
        else if(query==1) {
            cin >> x;
            cout << a.at(x) << endl;
        }
        else {
            a.pop_back();
        }
    }
    return 0;
}