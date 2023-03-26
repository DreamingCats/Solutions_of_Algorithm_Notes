#include <iostream>
#include <cstring>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

typedef pair<int, int> Position;

const int MAXN = 100;
int n, m, maze[MAXN][MAXN];
bool inQueue[MAXN][MAXN] = {false};
int minStep[MAXN][MAXN];

const int MAXD = 4;
int dx[MAXD] = {0, 0, 1, -1};
int dy[MAXD] = {1, -1, 0, 0};

bool canVisit(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m && maze[x][y] == 0 && !inQueue[x][y];
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
                if (canVisit(nextX, nextY)) {
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
    cin>>n>>m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>maze[i][j];
        }
    }
    
    BFS(0, 0);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<(maze[i][j]==1 ? -1 : minStep[i][j]);
            cout<<(j < m - 1 ? " " : "\n");
        }
    }
    return 0;
}
