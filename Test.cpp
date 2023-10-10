#include <iostream>
using namespace std;

int main(void)
{
    // 45분 일찍 일어나게 세팅
    int H;
    int M;

    cin >> H;
    cin >> M;

    if(M < 45)
    {
        H -=1;
    }

    if(H < 0)
    {
        H += 24;
    }

    M -= 45;

    if(M < 0)
    {
        M += 60;
    }
    

    cout<< H << " " << M <<endl;


    
    return 0;
}
