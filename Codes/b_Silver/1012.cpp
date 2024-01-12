#include <iostream>
#include <vector>

using namespace std;

int test[51][51];
bool isVisited[51][51];

int resultCnt = 0;
int t;
int X, Y, K; // 가로 세로 배추 개수

// 방향 
int dir[4][2] =
{
    -1,  0, // 상 좌 하 우
     0, -1,
     1,  0,
     0,  1,
};

void DFS(int hereY, int hereX)
{
    if (isVisited[hereY][hereX] == true)
        return;

    // 방문기록
    isVisited[hereY][hereX] = true;

    // 혹시모를 이중 체크
    if (hereY > Y - 1 || hereY < 0 || hereX > X - 1 || hereX < 0)
        return;

    for (int i = 0; i < 4; i++)
    {
        int nextDirY = hereY + dir[i][0]; // y좌표
        int nextDirX = hereX + dir[i][1]; // x좌표

        if (nextDirY < Y && nextDirY > -1 && nextDirX < X && nextDirX > -1 && test[nextDirY][nextDirX] == 1)
            DFS(nextDirY, nextDirX);
    }
}

int main()  
{
    
    // 데이터 입력  1	1	0	0	0	0	0	0	0	0

    cin >> t;

    while (t > 0)
    {
        cin >> X >> Y >> K;
        int size = X * Y;

        for (int j = 0; j < Y; j++)
        {
            for (int i = 0; i < X; i++)
            {
                isVisited[j][i] = false;
                test[j][i] = 0;
            }
        }

		for (int i = 0; i < K; i++)
		{
			int tempX = 0;
			int tempY = 0;
			cin >> tempX >> tempY;
			test[tempY][tempX] = 1; // 0번 줄에 0번칸 0번줄에 1번째 칸 .. etc
		}

        // 0,0부터 서칭
        for (int j = 0; j < Y; j++)
        {
            for (int i = 0; i < X; i++)
            {
                if (isVisited[j][i] == false && test[j][i] == 1)
                {
                    DFS(j, i); 
                    resultCnt++;
                }
            }

        }

        cout << resultCnt << endl;
        resultCnt = 0;
        t--;
    }

    return 0;
}