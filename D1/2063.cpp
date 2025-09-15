#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int array[200];

    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    sort(array, array + n);

    cout << array[n / 2];

    return 0;
}