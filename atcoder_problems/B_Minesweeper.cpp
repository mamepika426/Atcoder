#include <iostream>
#include <vector>
using namespace std;

int count_bombs(vector<string> vec, int h, int w, int H, int W) {
    int ans = 0;
    for(int y = h - 1; y < h + 2; y++) {
        for(int x = w - 1; x < w + 2; x++) {
            if(-1 < x && x < W && -1 < y && y < H) {
                if(vec[y][x] == '#') ans++;
            }
        }
    }
    return ans;
} 

int main() {
    int H, W; cin >> H >> W;
    vector<string> vec(H);
    for(int h = 0; h < H; h++) cin >> vec[h];

    // .を周りの爆弾の数で埋める
    for(int h = 0; h < H; h++) {
        for(int w = 0; w < W; w++) {
            if(vec[h][w] == '.') {
                char n_bombs = count_bombs(vec, h, w, H, W) + '0';
                // cout << n_bombs << endl;
                vec[h][w] = n_bombs;
            }
        }
    }

    // 表示
    for(int h = 0; h < H; h++) cout << vec[h] << endl;
    return 0;
}