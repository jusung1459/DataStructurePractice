#include <iostream>
using namespace std;

//http://codeforces.com/problemset/problem/500/A
int main()
{
    int x, y;
    cin >> x >> y;
    int board[y];

    for (int i = 0; i < x; i++)
    {
        cin >> board[i];
    }

    for (int j = 0; j < x; j++)
    {
        cout << board[j];
    }

    return 0;
}
