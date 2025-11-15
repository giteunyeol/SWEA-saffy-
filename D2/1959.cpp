#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        int n, m;
        cin >> n >> m;
        vector<int> A;
        vector<int> B;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            A.push_back(temp);
        }
        for (int j = 0; j < m; j++)
        {
            int temp;
            cin >> temp;
            B.push_back(temp);
        }

        int max = - 1e9;
        if(m > n) // b가 a보다 긴 경우
        {
            for(int i = 0; i <= m - n; i++) // B.front의 위치 이동
            {
                int temp_max = 0;
                for(int j = 0; j < n; j++) // 각각 곱해주기
                {
                    temp_max += A[j] * B[i + j]; // tempmax에 곱들을 다 더해줌
                }
                if(temp_max > max) //이번 경우의 합이 이전 최댓값보다 높으면 ? 갱신
                {
                    max = temp_max;
                }
            }
        }
        else // a가 b보다 긴 경우
        {
            for (int i = 0; i <= n - m; i++) // B.front의 위치 이동
            {
                int temp_max = 0;
                for (int j = 0; j < m; j++) // 각각 곱해주기
                {
                    temp_max += A[j + i] * B[j]; // tempmax에 곱들을 다 더해줌
                }
                if (temp_max > max) // 이번 경우의 합이 이전 최댓값보다 높으면 ? 갱신
                {
                    max = temp_max;
                }
            }
        }

        cout << '#' << t << " " << max << "\n";
    }

    return 0;
}