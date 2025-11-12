#include <iostream>
#include <deque>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //회문이면 1, 아니면 0
    int tc;
    cin >> tc;
    for(int t = 1; t <= tc; t++)
    {
        string temp;
        cin >> temp;

        deque<char> DQ;
        for(int i = 0; i < temp.length(); i++)
        {
            DQ.push_back(temp[i]);
        }
        bool boolean = true; //기본을 트루로

        while(!DQ.empty())
        {
            if(DQ.front() != DQ.back()) // 제일 앞과 제일 뒤가 다르면 boolean 수정 후 브레이크
            {
                boolean = false;
                break;
            }
            DQ.pop_front();
            if(DQ.empty()) { break; }
            DQ.pop_back();
        }

        cout << '#' << t <<  " ";
        if(boolean == true)
        {
            cout << '1' << "\n";
        }
        else
        {
            cout << '0' << "\n";
        }
        
    }

    return 0;
}