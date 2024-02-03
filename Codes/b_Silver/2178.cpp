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

int N, M;
int arr[102][102];
bool visited[102][102];
int cost[102][102];
// 위 왼 아래 오
int dy[4] = { -1 , 0, 1 ,0 };
int dx[4] = {  0, -1, 0, 1 };

void BFS(int y, int x)
{
	cost[y][x] = 1;
	visited[y][x] = 1;
	queue<pair<int, int>> q;
	q.push(make_pair(y, x));
	
	while (q.size() != 0)
	{
		tie(y, x) = q.front();
		q.pop();
		
		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || ny >= N || nx < 0 || nx >= M)
				continue;
			if (arr[ny][nx] == 0)
				continue;
			if (visited[ny][nx])
				continue;

			cost[ny][nx] = cost[y][x] + 1;
			visited[ny][nx] = 1;
			q.push(make_pair(ny, nx));
		}
	}


}

int main() 
{
	cin >> N >> M;

	
	'1';
	'0';
	for (int y = 0; y < N; y++)
	{
		string temp;
		cin >> temp;
		for (int x = 0; x < M; x++)
		{
			int t = temp[x] - '0';
			arr[y][x] = t;
		}
	}

	BFS(0, 0);

	cout << cost[N - 1][M - 1];
}
