#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

int main(void)
{
    for(int i = 0; i < 10; i++)
    {
        int building_count;
        int height_sum = 0; // 조망권 총 합
        vector <int> buildings; // building들 높이 세이브하는 벡터: buildings
        cin >> building_count;
        for(int j = 0; j < building_count; j++) //buildings에 빌딩들 높이 다 세이브 해줌.
        {
            int input_temp;
            cin >> input_temp;
            buildings.push_back(input_temp);
        }
        
        //최솟값 뽑아오는 함수
        for(int j = 2; j < building_count - 2; j++) // j-2, j-1, j+1, j+2 비교
        {
            int view = min({buildings[j] - buildings[j - 2],
                            buildings[j] - buildings[j - 1],
                            buildings[j] - buildings[j + 1],
                            buildings[j] - buildings[j + 2]}); // 최소조망권

            if(view > 0)
            {
                height_sum += view;
            }
        }

        cout << "#" << i + 1 << " " << height_sum << "\n";
        
    }

    return 0;
}