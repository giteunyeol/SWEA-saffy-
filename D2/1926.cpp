#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        bool t_s_n = false; // 판별할 자료형
        int cur_i = i;
        while (true)
        {
            //10의 배수들 예외처리 해줘야함. n은 100까지 가능
            if(cur_i % 10  == 0 || cur_i % 100 == 0 || cur_i % 1000 == 0)
            {
                cur_i = cur_i / 10;
                continue;
            }
            if ((cur_i % 10) % 3 == 0) // 해당 숫자 1의 자리가 3, 6, 9라면.
            {
                t_s_n = true;
                cout << '-';
            }
            if(cur_i < 10)
            {
                break;
            }
            cur_i = cur_i / 10;
        }
        if(t_s_n == true)
        {
            cout << " ";
            continue;
        }
        else // (t_s_n == false)
        {
            cout << i << " ";
        }
    }

    return 0;
}