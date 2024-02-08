#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <math.h>
#include <string>
#include <algorithm>
#include <map>
#include <cstring>
using namespace std;

int N, M, J; // N 스크린 크기 , M 바구니 크기

int main() 
{
    cin >> N >> M;
    cin >> J;

    int temp;
    int l = 1;
    int result = 0;
    for (int y = 0; y < J; y++)
    {
        int r = l + M - 1;
        cin >> temp;

        if (temp >= l && temp <= r)
        {
            continue;
        }
        else
        {
            // 좌측에 있다면?
            // 2(temp)   3(l)
            if (temp < l)
            {
                result += l - temp;
                l = temp;
            }
            else     // 우측에 있다면?  3(l) 4(r) 6(temp)
            {
                l += temp - r;
                result += temp - r;

            }
        }
    }

    cout << result << '\n';

    return 0;
}