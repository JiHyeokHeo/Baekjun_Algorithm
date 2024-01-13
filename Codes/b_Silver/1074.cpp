#include <iostream>
#include <list>
#include <vector>
#include <queue>
using namespace std;

int N, r, c;

// r행 c열
int result = 0;

void Z(int y, int x, int size)
{
    if (y == r && x == c)
    {
        cout << result << endl;
        return;
    }

    // r,c 가 현재 사분면에 존재할때
    if (r < y + size && r >= y && c < x + size && c >= x)
    {
        // 1
        Z(y, x, size / 2);
        // 2
        Z(y, x + size / 2, size / 2);
        // 3
        Z(y + size / 2, x, size / 2);
        // 4
        Z(y + size / 2, x + size / 2, size / 2);
    }
    else
    {
        result += size * size;
    }
}

int main(void)  
{
    int n = 0;

    cin >> N >> r >> c;

    n = pow(2, N);

    Z(0, 0, n);

    return 0;
}