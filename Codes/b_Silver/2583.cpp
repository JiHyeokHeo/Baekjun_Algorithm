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

int M; // 높이
int N; // 가로
int K; // 개수

int arr[104][104] = {};
bool visited[104][104] = {};
int result = 0;

int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, -1, 0, 1 };

void DFS(int y, int x, int& size)
{
	visited[y][x] = true;
	size++;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= M || nx < 0 || nx >= N)
			continue;
		if (visited[ny][nx] == true)
			continue;
		if (arr[ny][nx] == 1)
			continue;

		DFS(ny, nx, size);
	}
	

}

int main() 
{
	cin >> M >> N >> K;

	for (int i = 0; i < K; i++)
	{
		int tempLX, tempLY;
		cin >> tempLX >> tempLY;

		int tempRX, tempRY;
		cin >> tempRX >> tempRY;
		
		for (int j =  M - tempRY; j < M - tempLY; j++)
		{
			for (int k = tempLX; k < tempRX; k++)
			{
				arr[j][k] = 1;
			}
		}
	}
	
	vector<int> answer;
	int size = 0;
	for (int y = 0; y < M; y++)
	{
		for (int x = 0; x < N; x++)
		{
			if (arr[y][x] == 0 && visited[y][x] == false)
			{
				result++;
				DFS(y, x, size);
				answer.push_back(size);
				size = 0;
			}
		}
	}
	sort(answer.begin(), answer.end(), less<int>());

	cout << result << '\n';
	for (int value : answer)
		cout << value << " ";
	
	int c = 0;
}
