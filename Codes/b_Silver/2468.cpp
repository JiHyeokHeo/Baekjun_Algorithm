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

int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, -1, 0, 1 };

int N;

int arr[104][104];
bool visited[104][104];

void DFS(int y, int x, int target)
{
	visited[y][x] = true;

	for (int i = 0; i < 4; i++)
	{
		int ny = dy[i] + y;
		int nx = dx[i] + x;

		if (ny < 0 || ny >= N || nx < 0 || nx >= N)
			continue;
		if (visited[ny][nx] == true)
			continue;
		if (arr[ny][nx] <= target)  // 6 잠기는 기준이 타겟
			continue;

		visited[ny][nx] = true;
		DFS(ny, nx, target);
	}
}

int main() 
{
	cin >> N;

	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
		{
			int temp;
			cin >> temp;
			arr[y][x] = temp;
		}
	}

	int maxCnt = 1;

	for (int z = 1; z <= 100; z++)
	{
		memset(visited, false, sizeof(visited));
		int compareMax = 0;
		for (int y = 0; y < N; y++)
		{
			for (int x = 0; x < N; x++)
			{
				if (visited[y][x] == false && arr[y][x] > z)
				{
					DFS(y, x, z);
					compareMax++;
				}
			}
		}
		maxCnt = max(maxCnt, compareMax);
	}

	cout << maxCnt << '\n';

}
