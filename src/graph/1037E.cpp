//http://codeforces.com/problemset/problem/1037/E

#include <iostream>
using namespace std;

int main() {
    // people, days, number of friends to have
    int n, m, k;
    cin >> n >> m >> k;
    int people[m][n];

    for(int i=0; i<m; i++) {
        int x, y;
        cin >> x >> y;
        people[i][x] = people[i-1][x] + 1;
        people[i][y] = people[i-1][y] + 1;
    }

    for(int i=0; i<m; i++) {
        int num = 0;
        for(int j=0; j<m; j++) {
            if (people[i][j] >= k) {
                num++;
            }
            cout << num;
        }
        cout << num;
    }
    
    return 0;
}