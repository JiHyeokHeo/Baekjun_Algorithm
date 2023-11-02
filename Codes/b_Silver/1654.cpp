#include <iostream>
using namespace std;

int main()
{
    int K = 0;
    int N = 0;
    
    cin>> K;
    cin>> N;

    int arr[K] = {};
    long end = -99;
    for(int i =0; i < K; i++)
    {
        int temp;
        cin>>temp;
        arr[i] = temp;
        if(end < temp)
            end = temp;
    }

    int cnt = 0;
    long start = 1;
    long mid = 0;
    int target = 0;

    while(start<=end)
    {
        mid = (start + end) / 2;
        for(int i =0; i < K; i++)
        {
            int temp = arr[i] / mid;
            cnt += temp;
        }

        if(cnt >= N)
        {
            target = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        
        cnt = 0;
    }

    cout<< target <<endl;
    
    return 0;
}