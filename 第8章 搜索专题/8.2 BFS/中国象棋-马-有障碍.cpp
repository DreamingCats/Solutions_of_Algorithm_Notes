#include <iostream>
#include <cstring>
#include <queue>
#include <map>
using namespace std;

typedef pair<int, int> Position;

const int MAXN = 100;
int n, m;
bool inQueue[MAXN][MAXN] = {false};
int minStep[MAXN][MAXN];
map<Position,bool> isBlock;

const int MAXD = 8;
//马走日 ,向量表示 
int dx[MAXD] = {-2, -1, 1, 2, -2, -1,  1,  2};
int dy[MAXD] = { 1,  2, 2, 1, -1, -2, -2, -1};

bool canVisit(int x, int y) {
    return (x >= 0 && x < n) && (y >= 0 && y < m) && !inQueue[x][y] && !isBlock[Position(x,y)];
}

void BFS(int x, int y) {
    memset(minStep, -1, sizeof(minStep));
    queue<Position> q;
    q.push(Position(x, y));
    inQueue[x][y] = true;
    minStep[x][y] = 0;
    int step = 0;
    
    while (!q.empty()) {
        int cnt = q.size();
        while (cnt--) {
            Position front = q.front();
            q.pop();
            for (int i = 0; i < MAXD; i++) {
                int nextX = front.first + dx[i];
                int nextY = front.second + dy[i];
                if (canVisit(nextX, nextY) && !isBlock[Position(front.first + dx[i] / 2, front.second + dy[i] / 2)]) {
                    inQueue[nextX][nextY] = true;
                    minStep[nextX][nextY] = step + 1;
                    q.push(Position(nextX, nextY));
                }
            }
        }
        step++;
    }
}

int main() {
    int x, y;
    cin>>n>>m>>x>>y;
    
    int k,blockX,blockY;
    cin>>k;
    for(int i=0;i<k;i++){
    	cin>> blockX >> blockY;
    	isBlock[Position(blockX-1,blockY-1)]=true;
	}
    
    BFS(x - 1, y - 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<< minStep[i][j] << (j < m - 1 ? " " : "\n");
        }
    }
    return 0;
}
