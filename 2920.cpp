#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main(void)
{
    int num[8] = {};

    for (int i = 0; i < 8; i++)
    {
        cin >> num[i];
    }


    bool isMixed = false;

    if(num[0] == 1)
    {
        for (int i = 1; i < 8; i++)
        {
            if(num[i] != (num[i - 1] + 1))
            {
                cout<< "mixed" <<endl;
                isMixed = true;
                break;
            }
        }
        if(!isMixed)
        cout<< "ascending" <<endl;
    }
    else if(num[0] == 8)
    {
        for (int i = 1; i < 8; i++)
        {
            if(num[i] != (num[i - 1] - 1))
            {
                cout<< "mixed" <<endl;
                isMixed = true;
                break;
            }
        }
        if(!isMixed)
        cout<< "descending" <<endl;
    }
    else
    {
        cout<< "mixed" <<endl;
    }

    return 0;
}
