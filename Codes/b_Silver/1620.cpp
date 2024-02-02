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
int M;
map<string, int > mp;
string arr[1000001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string temp;
		cin >> temp;
		mp[temp] = i + 1;
		arr[i + 1] = temp;
	}

	for (int i = 0; i < M; i++)
	{
		string temp;
		cin >> temp;
		
		if (atoi(temp.c_str()) == 0)
		{
			cout << mp[temp] << '\n';
		}
		else
		{
			cout << arr[atoi(temp.c_str())] << '\n';
		}

	}

}
