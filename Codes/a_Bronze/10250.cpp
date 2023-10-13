#include <iostream>
#include <vector>
#include <string>
using namespace std;

string ChangeWidthRoomNum(int w)
{
    string widthRoomNum ={};
    if(w < 10)
    {
        widthRoomNum ="0";
        widthRoomNum += to_string(w);
    }
    else
    {
        widthRoomNum = to_string(w);
    }

    return widthRoomNum;
}

int main()
{
    int testCase = 0;
    cin >> testCase;
    int H[testCase];
    int W[testCase];
    int N[testCase];

    for (int i = 0; i < testCase; i++)
    {
        cin >> H[i]; 
        cin >> W[i];
        cin >> N[i];
    }

    int cnt = 0;
    vector<string> roomNum;
    roomNum.reserve(cnt);
    for (int t = 0; t < testCase; t++)
    {
        cnt = 0;
        for (int y = 0; y < W[t]; y++)
        {
            for (int x = 0; x < H[t]; x++)
            {
                cnt++;
                if (cnt == N[t])
                {
                    string a = {};
                    a = to_string(x + 1);
                    roomNum.push_back(a);
                    break;
                }
            }

            if (cnt == N[t])
            {
                string a ={};
                a = ChangeWidthRoomNum(y + 1);
                roomNum[t] += a;
                break;
            }
        }
    }

    for (int t = 0; t < testCase; t++)
    {
        cout<< roomNum[t] <<endl;
    }

    return 0;
}