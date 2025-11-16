#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        int n;
        bool numbers[10];
        fill(numbers, numbers + 10, false); // 있으면 트루로 변경.
        cin >> n; // 시작 숫자
        int cur_n = n; // 나눠가면서 판별할 숫자
        int cur_ans = cur_n; // 답 출력할 수
        while (true)
        {
            cur_ans = cur_n; 
            // cur_n을 나눠주며 numbers에 삽입
            while (cur_n >= 10) // cur_n이 한자리 수로 되면 탈출
            {
                // 15 / 10 = 몫:1, 나머지 : 5
                // 135 / 10 = 몫 : 13, 나머지 : 5
                numbers[cur_n % 10] = true; // numbers[나머지]를 트루로
                cur_n = cur_n / 10;
            }
            numbers[cur_n] = true; // 1의자리 수 true로 만들어주고 넘어감

            bool breakpoint = true;
            for (int i = 0; i < 10; i++)
            {
                if (numbers[i] == false)
                {
                    breakpoint = false;
                }
            }
            if (breakpoint == true) // 답이 나온경우
            {
                cout << '#' << t << " " << cur_ans << "\n";
                break;
            }
            cur_n = cur_ans + n;
        }
    }
    return 0;
}