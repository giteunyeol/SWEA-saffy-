#include <iostream>
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
        int sum = 0;
        int numbers[10];
        for(int i = 0; i < 10; i++)
        {
            cin >> numbers[i];
        }
        sort(numbers, numbers + 10);
        for(int i = 1; i < 9; i++) //numbes 인덱스 1부터 8까지
        {
            sum += numbers[i];
        }
        int ans = sum / 8;
        if((sum / 8.0) - (sum / 8) >= 0.5)
        {
            ans++;
        }

        cout << '#' << t << " " << ans << "\n";
    }

    return 0;
}