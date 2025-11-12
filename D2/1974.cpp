#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        int boolean = true;
        int sudoqu[9][9];
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                int temp;
                cin >> temp;
                sudoqu[i][j] = temp;
            }
        }
        // 가로 검출
        for (int i = 0; i < 9; i++)
        {
            bool array[10]; // array는 각 숫자를 저장할 배열. array[n] == true면 해당 인덳의 숫자가 저장됐다는 의미.
            fill(array, array + 10, false);
            for (int j = 0; j < 9; j++)
            {
                if(array[sudoqu[i][j]] == true)
                {
                    boolean = false;
                    break;
                }
                array[sudoqu[i][j]] = true; // sudoqu(i,j)의 값을 해당 어레이에 저장
            }
        }

        //세로 검출
        for (int i = 0; i < 9; i++)
        {
            bool array[10]; // array는 각 숫자를 저장할 배열. array[n] == true면 해당 인덳의 숫자가 저장됐다는 의미.
            fill(array, array + 10, false);
            for (int j = 0; j < 9; j++)
            {
                if (array[sudoqu[j][i]] == true)
                {
                    boolean = false;
                    break;
                }
                array[sudoqu[j][i]] = true; 
            }
        }

        //3 * 3검출
        for(int i = 0; i < 9; i += 3)
        {
            for(int j = 0; j < 9; j += 3)
            {
                bool array[10];
                fill(array, array + 10, false);
                //각자 3* 3배열의 좌상단 시작
                for(int k = i; k < i + 3; k++)
                {
                    for(int l = j; l < j + 3; l++)
                    {
                        if( array[sudoqu[k][l]] == true )
                        {
                            boolean = false;
                            break;
                        }
                        array[sudoqu[k][l]] = true;
                    }
                }
            }
        } 
        
        if(boolean == true)
        {
            cout << '#' << t << " " << '1' << "\n";
        }
        else //boolean == false
        {
            cout << '#' << t << " " << '0' << "\n";
        }
    }

    return 0;
}