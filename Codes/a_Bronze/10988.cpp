#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <math.h>
#include <string>
#include <algorithm>
#include <map>
using namespace std;



int main() 
{
	string word;
	cin >> word;

	string reverseword = word;
	reverse(reverseword.begin(), reverseword.end());
	int size = word.size();
	int half = size / 2;
	if (size == 1)
	{
		cout << "1" << '\n';
	}

	for (int i = 0; i < half; i++)
	{
		if (word[i] != reverseword[i])
		{
			cout << "0" << '\n';
			break;
		}

		if (i + 1 == half)
			cout << "1" << '\n';
	}


	
	return 0;
}
