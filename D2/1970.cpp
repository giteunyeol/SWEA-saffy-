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
        //그리디
        int n;
        cin >> n;
        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0;
        
        while(n >= 10)
        {
            if(n >= 50000)
            {
                n = n - 50000;
                a++;
            }
            else if (n >= 10000)
            {
                n = n - 10000;
                b++;
            }
            else if (n >= 5000)
            {
                n = n - 5000;
                c++;
            }
            else if (n >= 1000)
            {
                n = n - 1000;
                d++;
            }
            else if (n >= 500)
            {
                n = n - 500;
                e++;
            }
            else if (n >= 100)
            {
                n = n - 100;
                f++;
            }
            else if (n >= 50)
            {
                n = n - 50;
                g++;
            }
            else 
            {
                n = n - 10;
                h++;
            }
        }
        
        cout << '#' << t << "\n";
        cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << "\n";
    }

}