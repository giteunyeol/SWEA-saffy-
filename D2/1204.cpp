#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    
    for(int i = 0; i < n; i++)
    {
        int case_number;
        int scores[101] = {0};
        cin >> case_number;

        for(int j = 0; j < 1000; j++)
        {
            int score;
            cin >> score;
            scores[score]++;
        }

        sort(scores, scores + 101);

        int max = scores[0];
        int answer; //index 저장값

        for(int j = 0; j < 101; j++)
        {
            if(scores[j] >= max)
            {
                max = scores[j];
                answer = j;
            }
        }
        
        cout << "#" << case_number << " " << answer << "\n";
    }

    return 0;
}