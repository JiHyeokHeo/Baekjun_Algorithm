#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 0;
    int flag = -99;
    string num = {};
    while(1)
    {
        int halfNum;
        cin >> num;

        if(num == "0")
            break;

        int size = num.size();
        halfNum = size / 2;
        while (i <= halfNum)
        {
            if (num[0 + i] == num[(size - 1) - i])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
            i++;
        }

        i = 0;
        if(flag == 1)
            cout<<"yes"<<endl;
        else if(flag == 0)
            cout<<"no"<<endl;
    }

    return 0;
}