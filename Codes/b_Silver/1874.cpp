#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int globalnum = 1;

int main()
{
    stack<int> test;
    vector<char> result;
    int num = 0;
    cin >> num;

    for(int i =0; i<num; i++)
    {
        int temp = 0;
        cin >> temp;

        while(globalnum <= temp)
        {
            test.push(globalnum);
            globalnum++;
            result.push_back('+');
        }        

        if(test.top() == temp)
        {
            test.pop();
            result.push_back('-');
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    
    for(int i =0; i< result.size(); i++)
    {
        cout << result[i] << '\n';
    }
    

    return 0;
}