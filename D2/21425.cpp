#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int ans = -1;
        // a, b를 비교해서 더 작은수에 더 큰수를 더하면 될 것 같은데?
        while (true)
        {
            if (a >= b) // b보다 a가 크거나 같은경우.
            {
                b += a;
                ans++;
                if (a > n)
                {
                    cout << ans << "\n";
                    break; // 다음 테스트 케이스로
                }
                // n을 초과하지 못한 경우
                else
                {
                    continue;
                }
            }
            else // b < a 
            {
                a += b;
                ans++;
                if(b > n)
                {
                    cout << ans << "\n";
                    break;   
                }
                else 
                {
                    continue;
                }
            }
        }
    }

    return 0;
}