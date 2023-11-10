#include <iostream>
using namespace std;

// 소수 찾기
int main()
{
    bool arr[1001] = { 0 };
    arr[1] = true;

    int N;
    cin >> N;

    int testCase[N + 1] = {};
    int maxNum = -99;
    for(int i = 1; i <= N; i++)
    {
        int temp;
        cin >> temp;

        if(maxNum < temp)
            maxNum = temp;

        testCase[i] = temp;
    }

    for(int i = 2; i <= maxNum; i++)
    {
        for(int j = 2; i * j <= maxNum; j++)
        {
            arr[i * j] = true;
        }
    }

    int resultCnt = 0;
    for(int i = 1; i <= N; i++)
    {
        int idx = testCase[i];
        if(arr[idx] == false)
            resultCnt++;
    }

    cout << resultCnt;

    return 0;
}