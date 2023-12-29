#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> g_bandage;
vector<vector<int>> g_attack;
int g_health;
int g_continSuccess;
int g_attackCnt = 0;

int solution(vector<int> bandage, int& health, vector<vector<int>> attacks) 
{
    if(health >= g_health)
        health = g_health;

    if(health < 0)
        health = 0;

    if(health == 0)
        return -1;

    // 연속 성공와 공격 대기시간 같을 시 공격 시행
    if(attacks[g_attackCnt][0] == g_continSuccess)
    {
        health -= attacks[g_attackCnt][1];
        g_continSuccess = 0;
        ++g_attackCnt;
    }

    return 1;
}

int main()
{
    int time = 0;

    for(int i =0; i < 3; i++)
    {
        int temp;
        cin >> temp;
        g_bandage.push_back(temp);
    }

    cin >> g_health;

    int attackCnt =0;
    cin >> attackCnt;
    for(int j = 0; j < attackCnt; j++)
    {
        int attackTime;
        int dmg;
        cin >> attackTime;
        cin >> dmg;

        g_attack.push_back(vector<int>{attackTime, dmg});
    }
    
    
    int myHeatlh = g_health;
    while(true)
    {
        if(solution(g_bandage, myHeatlh, g_attack))
            g_continSuccess++;
        else
        {
            cout << "-1" << endl;
            break;
        }

        if(g_attackCnt >= g_attack.size())
        {
            cout << myHeatlh << endl;
            break;
        }
        time++;
    }

    return 0;
}