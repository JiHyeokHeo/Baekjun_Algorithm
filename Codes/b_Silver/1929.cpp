#include <iostream>
#include <cmath>
using namespace std;

bool arr[1000001];

int main()
{
    arr[1] = true;
    
    int M;
    int N;

    cin >> M;
    cin >> N;

    for (int i = 2; i <= N; i++)
    {
        for (int j = 2; i * j <= N; j++)
        {
            arr[i * j] = true;
        }
    }

    for (int i = M; i <= N; i++)
    {
        if (arr[i] == false)
            cout << i << '\n';
    }

    return 0;
}