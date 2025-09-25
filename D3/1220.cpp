#include <iostream>

using namespace std;

int main(void)
{
    for(int TC = 0; TC < 10; TC++) //testcase 10번
    {
        int square[100][100];
        int length;
        int count = 0;
        cin >> length; // 100 고정
        for(int i = 0; i < length; i++)
        {
            for(int j = 0; j < length; j++) // 100 * 100으로 입력받음.
            {
                cin >> square[i][j];
            }
        }

        // 0:빈공간 1:N극 2:S극
        for (int i = 0; i < length; i++) // i:
        {
            for (int j = 0; j < length; j++) // 100 * 100으로 입력받음.
            {
                if(square[i][j] == 1) // 1:N극. 가로:j 세로:i
                {
                    for(int k = i + 1; k < length; k++) // 아래로 내려감.
                    {
                        if(square[k][j] == 1) // N극인 경우
                        {
                            break; // 해당 for문 탈주
                        }
                        else if(square[k][j] == 2) // S극인 경우
                        {
                            count++;
                            break;
                        }
                        // 빈 공간인 경우 그냥 넘어가면 됨.
                    }
                }
            }
        }
        cout << "#" << TC + 1 << " " << count << "\n";
    }

    return 0;
}