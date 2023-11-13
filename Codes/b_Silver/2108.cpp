#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int N; 
    cin>> N;
    vector<int> arr;
    vector<int> indexes;
    arr.reserve(N);
    indexes.resize(8001);
    indexes = {0};
    double average = 0;
    for(int i =0; i < N; i++)
    {
        int temp;
        cin >> temp;
        average += temp;
        arr.push_back(temp);
        indexes[temp + 4000]++;
    }

    
    // 정렬 알고리즘 // 최대 최소
    sort(arr.begin(), arr.end());    
    
    // 최빈값
    int most = -9999;
    int most_cnt = -1;
    bool isNotFirst = false;
    for(int i =0; i< 8001; i++)
    {
        if(indexes[i] == 0)
            continue;;
        
        if(indexes[i] == most_cnt)
        {
            if(isNotFirst)
            {
                most = i - 4000;
                isNotFirst = false;
            }
        }

        if(indexes[i] > most_cnt)
        {
            most = i - 4000;
            most_cnt = indexes[i];
            isNotFirst = true;
        }
    }

    int sumAverage = round(average / N);
    if(sumAverage == -0)
    {
        sumAverage = 0;
    }
    int middle = (arr.size() / 2);
    cout<< sumAverage << endl;
    cout<< arr[middle] << endl;
    cout<< most<< endl;
    cout << arr.back() - arr.front() << endl; 
 
    return 0;
}