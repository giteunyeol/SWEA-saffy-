#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >>  tc;
    for(int t = 1; t <= tc; t++)
    {
        //p:a사의 기본요금 q: b사의 기본요금 r: b사가 추가요금을 받는 기준 리터, s: 초과했을때 1L당 요금, w: 사용 수도양
        int p, q, r, s, w;
        cin >> p >> q >> r >> s >> w; 
        int a_cost = 0, b_cost = 0;

        //a사의 요금
        a_cost += p * w; //단순하게 기본 요금 * 사용 L를 더해줌.
        //b사의 요금
        b_cost += q; // 기본요금 우선 추가

        if(w > r) // 사용한 수도량이 기준치보다 높을때.
        {
            b_cost += s * (w-r);
        }

        if(a_cost < b_cost) // a가 더 쌀경우
        {
            cout << '#' << t << " " << a_cost << "\n";
        }
        else
        {
            cout << '#' << t << " " << b_cost << "\n";
        }
    }
    return 0;
}