#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <math.h>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

string name;

int main() 
{
	getline(cin, name);

	for (int i = 0; i < name.size(); i++)
	{
		if (name[i] < 65 || (name[i] > 90 && name[i] < 97) || name[i] > 122)
			continue;

		if (name[i] + 13 > 90 && name[i] >= 65 && name[i] <= 90)
		{
			int idx = name[i] + 13 - 'Z';
			name[i] = 'A' - 1 + idx;
		}
		else if (name[i] + 13 > 122 && name[i] >= 97 && name[i] <= 122)
		{
			int idx = name[i] + 13 - 'z';
			name[i] = 'a' - 1 + idx;
		}
		else
		{
			name[i] += 13;
		}
	}

	cout << name;
	


	return 0;
}
