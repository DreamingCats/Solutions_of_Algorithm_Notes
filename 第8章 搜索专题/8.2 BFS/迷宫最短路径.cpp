#include <iostream>
#include <limits.h>
#include <utility>
#include <vector>
using namespace std;
typedef pair<int,int> Position;
const int maxn=100;
int n,m;
int map[maxn][maxn];
bool visited[maxn][maxn]={false};
int maxValue=INT_MIN;
vector<Position> tempPath,optPath;

int d[4][2]={{0,1},
			{0,-1},
			{1,0},
			{-1,0}};

bool isValid(int x,int y){
	return (x>=0&&x<n) && (y>=0&&y<m) && map[x][y]==0 && !visited[x][y];
}

void DFS(int x,int y,int nowValue){
	
	if(x==n-1&&y==m-1){ //µ½´ïÖÕµã 
		if(nowValue>maxValue){
			maxValue=nowValue;
			optPath=tempPath;
		}
		return;
	}
	
	visited[x][y]=true;
	for(int i=0;i<4;i++){
		int nextX=x+d[i][0];
		int nextY=y+d[i][1];
		if(isValid(nextX,nextY)){
			tempPath.push_back(Position(nextX,nextY));
			DFS(nextX,nextY,nowValue+map[nextX][nextY]);
			tempPath.pop_back();
		}
	} 
	visited[x][y]=false;
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	
	tempPath.push_back(Position(0,0));
	
	DFS(0,0,map[0][0]);
	
	for(int k=0;k<optPath.size();k++){
		cout<<optPath[k].first+1<<" " <<optPath[k].second+1<<endl;
	}
	
	return 0;
} 
