#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int nums[10];
    int remains[10];

    int remainCnt[100] = {};

    for (int i = 0; i < 10; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < 10; i++)
    {
        int remain =  nums[i] % 42;
        remains[i] = remain;
    }

    for(int i=0; i<10; i++)
    {
        remainCnt[remains[i]]++;
    }

    int cnt = 0;
    for(int i=0; i<100; i++)
    {
        if(remainCnt[i] >= 1)
        {
            cnt++;
        }
    }


    cout<< cnt;
    return 0;
}