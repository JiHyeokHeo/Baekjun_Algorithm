#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    double average = 0;
    cin >>N;
    
    double totalScore = 0;
    int arr[N];
    double highestScore = -1;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if(highestScore < arr[i])
            highestScore = arr[i];

        totalScore += arr[i];
    }

    average = totalScore / N;

    double result = 0;
    result = average / highestScore * 100;

    cout << result;
    return 0;
}