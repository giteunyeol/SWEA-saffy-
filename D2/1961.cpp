#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for(int t = 1; t <= tc; t++)
    {
        int n;
        cin >> n;
        int board[8][8];

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> board[i][j];
            }
        }

        cout << '#' << t << "\n";
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout << board[n -j -1][i];
            }
            cout << " ";
            for(int j = 0; j < n; j++)
            {
                cout << board[n-i-1][n-j-1]; // n-i-1, n-j-1
            }
            cout << " ";
            for (int j = 0; j < n; j++)
            {
                cout << board[j][n-i-1];
            }
            cout << "\n";
        }
    }
    return 0;
}