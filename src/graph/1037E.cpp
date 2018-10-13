//http://codeforces.com/problemset/problem/1037/E

#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int graph[n][n];

    //none are friends
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n; i++)
        {
            graph[i][k] = 0;
        }
    }

    for (int i = 1; i < n; i++)
    {
    }
    return 0;
}