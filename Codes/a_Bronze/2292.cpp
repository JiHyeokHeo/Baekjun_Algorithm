#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // 더해지는 수가 6, 12, 18, 24, 30
    // 1, 7, 19, 37, 61, 91,

    int sum = 1;
    // 내가 만약 값을 13을 쓴다.

    int i = 0;
    long cnt = 0;

    if (N == 1)
        cnt = 1;

    while (sum < N)
    {
        sum += i;
        i += 6;
        cnt++;
    }

    cout << cnt;

    return 0;
}