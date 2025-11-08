#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for(int t = 1; t <= tc; t++)
    {
        int n, m; // n : 배열의 범위. n * n, m : 파리채의 넓이 : m * m;
        int board[16][16];
        
        memset(board, 0, sizeof(board));
        //보드에 입력 받기
        cin >> n >> m;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int temp;
                cin >> temp;
                board[i][j] = temp;
            }
        }
        
        //i - m, j - m까지
        int maximum = -1; // 초기값을 아주 작게 세팅
        for(int i = 0; i <= n - m; i++)
        {
            for(int j = 0; j <= n - m; j++)
            {
                //현재 시작 좌표: i, j
                //순회하는 현재 좌표 : k, ㅣ
                int surface = 0;
                for(int k = i; k < i + m; k++) //행
                {
                    for(int l = j; l < j + m; l++)
                    {
                        surface += board[k][l];
                    }
                }
                maximum = max(surface, maximum);
            }
        }

        cout << '#' << t << " " << maximum << "\n";
    }


    return 0;
}