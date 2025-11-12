#include <iostream>
#include <string.h>

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
        //0으로 전부 패딩하고 차례대로 채우면 될듯?
        int board[11][11];
        memset(board, 0, sizeof(board)); //board를 0으로 올 초기화
        for(int i  = 0; i < 10; i++)
        {
            board[i][0] = 1; // 좌측 끝들 모두 1로 초기화
        }

        for(int i = 1; i < 11; i++)
        {
            for(int j = 1; j < 11; j++)
            {
                //바로 위, 위 좌측 인덱스 더한 값
                board[i][j] = board[i-1][j]  + board[i-1][j-1];
            }
        }


        //출력
        cout << '#' << t << "\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}