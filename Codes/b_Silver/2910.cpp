#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <math.h>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <cstring>
using namespace std;

int N, C;

bool compare(pair<int,pair<int, int>> a, pair<int,pair<int, int>> b)
{
    if (a.second.first == b.second.first)
        return a.second.second < b.second.second;

    // 큰게 앞으로 ~
    return a.second.first > b.second.first;
}

int main() 
{
    cin >> N >> C;

    int temp;
    // key 값은 value, pair에 카운트와 우선순위
    map<int, pair<int,int>> mp;
    

    for (int y = 0; y < N; y++)
    {
        cin >> temp;

        map<int, pair<int, int>>::iterator iter = mp.find(temp);
        if (iter != mp.end())
        {
            int cnt = ++mp[temp].first;

            mp[temp].first = cnt;
        }
        else
            mp.insert(make_pair(temp, make_pair(1, y)));

    }

    vector<pair<int, pair<int, int>>> vec (mp.begin(), mp.end());
    sort(vec.begin(), vec.end(), compare);

    for (auto num : vec)
    {
        for (int y = 0; y < num.second.first; y++)
        {
            cout << num.first << " ";
        }
    }

    return 0;
}