#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <math.h>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int arr[9] = {};
int sum = 0;

void print(vector<int>& result)
{
	for (int i : result)
		cout << i << '\n';
}

void check(vector<int>& result)
{
	for (int i : result)
		sum += i;

	if (sum == 100)
	{
		print(result);
		exit(0);
	}

	sum = 0;
}

void combi(int start, vector<int>& result)
{
	if (result.size() == 7)
	{
		check(result);
		return;
	}


	for (int i = start + 1; i < 9; i++)
	{
		result.push_back(arr[i]);
		combi(i, result);
		result.pop_back();
	}
}

int main() 
{
	vector<int> result;

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + 9);
	
	combi(-1, result);

	return 0;
}
