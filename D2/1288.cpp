#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    string grade[10] = {"A+", "A0" , "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"};
    for (int t = 1; t <= tc; t++)
    {
        int n, k; // n : 학생 수  k: 학생 번호
        cin >> n >> k;
        vector<int> student_score; // 순위만 매기면 되니까 굳이 정확한 점수를 낼 필요가 없음
        for(int i = 0; i < n; i++)
        {
            int midterm, finalexam, homework;
            cin >> midterm >> finalexam >> homework;
            int sum = midterm * 35 + finalexam * 45 + homework * 20;
            student_score.push_back(sum); // n번째 학생 점수 삽입
        }
        // ------ 여기까지 학생들 점수 벡터에 다 삽입됨. ------- 
        int cur_number = student_score[k-1];
        sort(student_score.begin(), student_score.end(), greater<int>());
        int rank;
        for(int i = 0; i < student_score.size(); i++)
        {
            if(student_score[i] == cur_number)
            {
                rank = i + 1; // 몇등인지
            }
        }
        //현재 rank는 몇등인지 알려줌.
        cout << '#' << t << " " << grade[(rank - 1) / (n / 10)] << "\n";
    }

    return 0;
}