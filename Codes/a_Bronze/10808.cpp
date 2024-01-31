#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <math.h>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int arr[26] = {};

int main() 
{
	string word = " ";
	cin >> word;

	for (int j : word )
	{
		arr[j - 97] += 1;
	}

	for (int i : arr)
		cout << i << " ";


	return 0;
}
