#include <iostream>

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
        cin >> n;
        int a = 0, b = 0, c = 0, d = 0, e = 0; // a : 2, b : 3, c : 5, d : 7, e : 11
        while (n >= 2)
        {
            if (n % 2 == 0) // 나누어 떨어지면
            {
                n = n / 2;
                a++;
            }
            if (n % 3 == 0)
            {
                n = n / 3;
                b++;
            }
            if (n % 5 == 0)
            {
                n = n / 5;
                c++;
            }
            if (n % 7 == 0)
            {
                n = n / 7;
                d++;
            }
            if (n % 11 == 0)
            {
                n = n / 11;
                e++;
            }
        }
        cout << '#' << t << " " << a << " " << b << " " << c << " " << d << " " << e << "\n";
    }
}