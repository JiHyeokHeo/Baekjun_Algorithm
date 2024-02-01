#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <math.h>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int A, B, C;

int arr[101];

int timeIdx[101];

int main() 
{
	cin >> A >> B >> C;

	for (int i = 0; i < 3; i++)
	{
		// tempY 시작, tempX 도착
		int tempY, tempX;
		cin >> tempY >> tempX;
		
		for (int j = tempY; j < tempX; j++)
		{
			timeIdx[j] += 1;
		}
	}

	// 트럭 3대를 넣은 시간
	// 1 ~ 6
	// 3 ~ 5
	// 2 ~ 8

	// 3개가 다 겹치면 A값
	// 2개가 겹치면 B
	// 1개면 C
	
	int result = 0;
	for (int i = 0; i < 101; i++)
	{
		if (timeIdx[i] == 1)
			result += A;

		if (timeIdx[i] == 2)
			result += B * 2;

		if (timeIdx[i] == 3)
			result += C * 3;
	}

	cout << result << '\n';

	return 0;
}
