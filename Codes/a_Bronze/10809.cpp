#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = {};
    cin>>name;

    char a = 'a';
    for(int i=0; i<26; i++)
    {
        int num = -99;
        int cnt = 0;
        for(char a : name)
        {
            if((int)a == i + 97)
            {
                num = cnt;
                break;
            }            
            cnt++;
        }

        if(num == -99)
            cout<< -1 <<" ";
        else
            cout<< num<< " ";
    }
    return 0;
}