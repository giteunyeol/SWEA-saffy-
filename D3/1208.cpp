#include <iostream>
#include <algorithm>

using namespace std;

int findmax_index(int (&box_height_save)[100])
{
    int max = box_height_save[0];
    int ans_index = 1e9;

    for(int i = 0; i < 100; i++)
    {
        if(max < box_height_save[i])
        {
            ans_index = i;
        }
    }

    return ans_index;
}

int findmin_index(int (&box_height_save)[100])
{
    int min = box_height_save[0];
    int ans_index = 1e9;

    for(int i = 0; i < 100; i++)
    {
        if(min > box_height_save[i])
        {
            ans_index = i;
        }
    }

    return ans_index;
}


int main(void)
{
    for(int i = 0; i < 10; i++) //총 10번의 테스트 케이스를 돌리겠습니다.
    {
        int flatten; 
        cin >> flatten; //평탄화 작업을 몇번 할건지 받아. 인정?

        int box_height_save[100]; // 총 100개의 박스 배열들
        for(int j = 0; j <100; j++) // 총 100번의 높이를 입력받겠습니다.
        {
            int temp;
            cin >>temp;
            box_height_save[j] = temp;
        }

        //첨에 정렬할랬는데? 생각해보니까 최댓값 최솟값만 뽑아서 그냥 -+1씩 해주면 됨.
        for(int j = 0; j < flatten; j++) //평탄화 작업 횟수만큼 해줌.
        {
            //max랑 min값을 찾아야함. max와 min의 index값.
            int max_index = findmax_index(box_height_save);
            int min_index = findmin_index(box_height_save);

            box_height_save[max_index]--;
            box_height_save[min_index]++;
        }
        
        sort(box_height_save, box_height_save + 99);

        cout << "#" << i << " " << box_height_save[99] - box_height_save[0] << "\n";
    }

    return 0;
}