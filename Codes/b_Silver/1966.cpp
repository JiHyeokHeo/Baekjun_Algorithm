#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // 위치
    queue<pair<int, int>> nums;
    // 중요도 
    vector<int> importance;

    // 출력 횟수
    while (N--)
    {
        int outputCnt = 0;
        int M;
        int testNum;
        cin >> M;
        cin >> testNum;
        
        for (int i = 0; i < M; i++)
        {
            int temp_importance;
            cin >> temp_importance;
            nums.push(make_pair(i, temp_importance));
            importance.push_back(temp_importance);
        }
        // 중요도 정렬
        sort(importance.begin(), importance.end());

        int imp;
        int index;

        while (nums.size() != 0)
        {
            index = nums.front().first;
            imp = nums.front().second;
            nums.pop();

            // 다르면 인쇄 불가능 다시 뒤에 삽입
            if (imp < importance.back())
            {
                nums.push(make_pair(index, imp));
            }
            else if (imp == importance.back())
            {
                importance.pop_back();
                outputCnt++;

                // 인덱스 일치 시  
                if (index == testNum)
                    break;
            }
        }

        while (!nums.empty())
            nums.pop();

        importance.clear();

        cout << outputCnt << '\n';
    }
    return 0;
}