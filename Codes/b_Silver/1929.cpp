#include <iostream>
#include <cmath>
using namespace std;

bool arr[1000001];

bool Find(int n)
{
    for(int i = 2; i <= n; i++)
    {
        if(arr[i] == false)
            continue;

        if(arr[i])
        {
            for(int j = i * i; j <= n; j += i)
                arr[j] = false;
        }
    }
}

int main()
{
    int M;
    int N;

    cin>> M;
    cin>> N;

    for(int i = 2; i < 1000000; i++)
    {
        arr[i] = true;
    }    

    for(int i = 2; i <= 1000000; i++)
    {
        if(Find(i))
            cout<< i << '\n';
    }

    return 0;
}