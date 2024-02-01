#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <math.h>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int N;
int arr[26];

int main() 
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string temp;
		cin >> temp;
		int idx = temp[0];
		++arr[idx - 97];
	}
	
	bool isFound = false;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] >= 5)
		{
			cout << char(i + 97);
			isFound = true;
		}
	}

	if (isFound == false)
	{
		cout << "PREDAJA";
	}

	return 0;
}
