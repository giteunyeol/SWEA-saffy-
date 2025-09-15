#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int count;
        cin >> count;
        long long totalprofit = 0;
        vector<int> array;

        for(int j = 1; j <= count; j++) // 입력받음
        {
            int inputnumber;
            cin >> inputnumber;
            array.push_back(inputnumber);
        }
        //array에 저장

        int max = array.back(); // 뒤에서부터 시작하는 최댓값 저장할 변수

        for(auto k = array.end(); k != array.begin(); k--) //역으로 순회
        {
            if(max > array.back()) // max값이 array[k]보다 큰 경우
            {
                //차를 totalprofit에 더해줌
                totalprofit += max - array.back();
                array.pop_back();
            }
            else // max값 갱신
            {
                max = array.back();
                array.pop_back();
            }
        }

        cout << "#" << i << " " << totalprofit << "\n";

    }

    return 0;
}
