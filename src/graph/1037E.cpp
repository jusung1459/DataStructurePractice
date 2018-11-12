//http://codeforces.com/problemset/problem/1037/E

#include <iostream>
using namespace std;

int main() {
    // people, days, number of friends to have
    int n, m, k;
    cin >> n >> m >> k;
    int people[n][m+1];

    for(int i=0; i<=n; i++) {
        people[i][0] = 0;
    }

    for(int i=1; i<=m; i++) {
        int x, y;
        cin >> x >> y;
        people[x][i] = people[x][i-1] + 1;
        people[y][i] = people[y][i-1] + 1;
        cout << people[x][i];
        cout << people[y][i] << endl;
    }

    for(int i=1; i<=m; i++) {
        int num = 0;
        for(int j=0; j<m; j++) {
            if (people[i][j] >= k) {
                num++;
            }
        }
        cout << num;
    }
    
    return 0;
}