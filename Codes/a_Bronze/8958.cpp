#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int cnt = 0;
    cin >> cnt;
    vector<string> answer;
    answer.reserve(cnt);

    for (int i = 0; i < cnt; i++)
    {
        string a;
        cin >> a;
        answer.push_back(a);
    }

    vector<int> scoreRecord;
    scoreRecord.reserve(cnt);
    for (int j = 0; j < cnt; j++)
    {
        int continueCnt = 0;
        int score = 0;
        for (int i = 0; i < answer[j].length(); i++)
        {
            if(answer[j][i] == 'O')
            {
                continueCnt++;
                score += continueCnt;
            }
            else
            {
                continueCnt = 0;
            }
        }
        scoreRecord.push_back(score);
    }

    for(int i=0; i<cnt; i++)
    {
        cout<<scoreRecord[i]<<endl;
    }

    return 0;
}