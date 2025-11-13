#include <iostream>

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
        int count = 0;
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 1) // i가 홀수면
            {
                count += i;
            }
            else // i가 짝수면
            {
                count -= i;
            }
        }

        cout << '#' << t << " " << count << "\n";
    }
    return 0;
}