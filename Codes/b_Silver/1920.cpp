#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    set<int> result;

    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        result.insert(temp);
    }

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        if (result.find(temp) != result.end())
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }
    
    return 0;
}