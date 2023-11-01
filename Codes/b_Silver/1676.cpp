#include <iostream>
using namespace std;

void Factorial(int N, int* zeroCnt)
{
    if (N == 0)
        return;
   
    Factorial(N - 1, zeroCnt);

    if (N % 5 == 0)
        (*zeroCnt)++;

    if (N % 25 == 0)
        (*zeroCnt)++;

    if (N % 125 == 0)
        (*zeroCnt)++;
}

int main()
{
    int N;
    cin >> N;
    int result = 0;
    Factorial(N, &result);

    cout << result;
    return 0;
}