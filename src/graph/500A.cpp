#include <iostream>
using namespace std;

//http://codeforces.com/problemset/problem/500/A
int main()
{
    int x, y;
    cin >> x >> y;
    int board[5000];
    for (int i = 0; i < x; i++)
    {
        cin >> board[i];
    }

    for (int i = 1; i < x;)
    {
        if (i + board[i] == y)
        {
        }
    }
    return 0;
}