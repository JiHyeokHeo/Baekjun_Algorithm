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

int N;
int K;
int arr[100001];
int sum[100001];
int main()
{
	// 10만이라 2중포문 쓰면 큰일날것이고
	cin >> N >> K;
	::memset(arr, -99999, sizeof(arr));


	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		arr[i] = temp;
	}

	// 초기값을 넣어주고
	for (int i = 0; i < K; i++)
		sum[0] += arr[i];

	for (int i = 1; i < N - K + 1; i++)
	{
		sum[i] = sum[i - 1] - arr[i - 1] + arr[i + K - 1];
	}

	int max = -99999;
	for (int i = 0; i < N - K + 1; i++)
	{
		if (max <= sum[i])
			max = sum[i];
	}

	cout << max;
}
