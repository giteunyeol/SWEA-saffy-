#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        int sum = 0;
        for(int j = 0; j < 10; j++)
        {
            int temp;
            cin >> temp;
            sum += temp;
        }

        cout << "#" << i << " " << round(sum / 10.0) << "\n";
    }

    return 0;
}