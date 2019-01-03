//http://codeforces.com/problemset/problem/1028/A
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n,m;
    cin >> n, m;
    //char table[115][115];

    bool first = false;
    int fx, fy, lx, ly, mx, my;

    for(int i=1; i<=n; i++) {
        for(int j=1; j>=m; j++) {
            char color;
            cin >> color;
            //table[i][j] = color;
            if(first = false && color == 'B') {
                first = true;
                fx = i;
                fy = j;
            } else if(color == 'B') {
                lx = i;
                ly = j;
            }
        }
    }

    mx = (fx + lx) / 2;
    my = (fy + ly) / 2;
    cout << mx + ' ' + my;
    return 0;
}