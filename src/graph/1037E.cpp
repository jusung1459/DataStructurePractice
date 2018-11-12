//http://codeforces.com/problemset/problem/1037/E

#include <iostream>
using namespace std;

int main() {
    // people, days, number of friends to have
    int n, m, k;
    cin >> n >> m >> k;
    int people[n][m];

    for(int i=0; i<m; i++) {
        int x, y;
        cin >> x >> y;
        people[x][i] = people[x][i-1] + 1;
        people[y][i] = people[y][i-1] + 1;
    }

    for(int i=0; i<m; i++) {
        int num = 0;
        for(int j=0; j<m; j++) {
            if (people[j][i] >= k) {
                num++;
            }
            cout << num;
        }
        cout << num;
    }
    
    return 0;
}