#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int N, M;
vector<string> map;
int answer;
 
string Bchess[] = 
{
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};
 
string Wchess[] = 
{
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};
 
int MinPaintCount(int x, int y) 
{
    int BCount = 0;
    for (int i = 0; i < 8; i++) 
    {
        for (int j = 0; j < 8; j++) 
        {
            if (map[i + x][j + y] != Bchess[i][j]) 
            {
                BCount++;
            }
        }
    }
 
    int WCount = 0;
    for (int i = 0; i < 8; i++) 
    {
        for (int j = 0; j < 8; j++) 
        {
            if (map[i + x][j + y] != Wchess[i][j]) 
            {
                WCount++;
            }
        }
    }
 
    return min(BCount, WCount);
}
 
int main() {
 
    answer = -99;
    cin >> N >> M;
    for (int i = 0; i < N; i++) 
    {
        string tmp;
        cin >> tmp;
        map.push_back(tmp);
    }
 
    for (int i = 0; i <= N - 8; i++) 
    {
        for (int j = 0; j <= M - 8; j++) 
        {
            int minPaint = MinPaintCount(i, j);
            
            if (answer == - 99 || minPaint < answer) 
            {
                answer = minPaint;
            }
        }
    }
 
    cout << answer;
 
    return 0;
}
