#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    int TC = 1;
    while (tc--)
    {
        string words;
        cin >> words;
        for (int ans = 1; ans <= 10; ans++)
        {
            bool madi = true;
            for (int i = 0; i < 30 - ans; i++)
            {
                if (words[i] != words[i + ans])
                {
                    madi = false;
                    break;
                }
            }
            if (madi == true)
            {
                cout << '#' << TC << " " << ans << "\n";
                break;
            }
        }
        TC++;
    }
    return 0;
}