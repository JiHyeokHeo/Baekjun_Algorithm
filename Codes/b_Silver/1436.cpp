#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
	cin >> n;
	int cnt = 0;
	int num = 666;		
	
	while (true)
	{
		int comp = num;
		while (comp >= 666)
		{
			if (comp % 1000 == 666)		
			{
				cnt++;
				break;
			}
			comp /= 10;		
		}
		if (cnt == n) 
		{
			cout << num << endl;
			break;
		}
        num++;
	}

	return 0;
}