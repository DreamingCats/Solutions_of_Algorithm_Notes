#include <iostream>
#include <limits.h>
using namespace std;

const int maxn=5;
int n,m;
int map[maxn][maxn],value[maxn][maxn];
bool visited[maxn][maxn]={false};
int maxValue=INT_MIN;

int d[4][2]={{0,1},
			{0,-1},
			{1,0},
			{-1,0}};

bool isValid(int x,int y){
	return (x>=0&&x<n) && (y>=0&&y<m) && map[x][y]==0 && !visited[x][y];
}

void DFS(int x,int y,int nowValue){
	
	if(x==n-1&&y==m-1){ //到达终点 
		if(nowValue>maxValue){
			maxValue=nowValue;
		}
		return;
	}
	
	visited[x][y]=true;
	for(int i=0;i<4;i++){
		int nextX=x+d[i][0];
		int nextY=y+d[i][1];
		if(isValid(nextX,nextY)){
			DFS(nextX,nextY,nowValue+value[nextX][nextY]);
		}
	} 
	visited[x][y]=false;
}

int main(){
	cin>>n>>m;
	//用两个二维数组储存 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>value[i][j];
		}
	}
	
	DFS(0,0,value[0][0]);
	
	cout<<maxValue;
	return 0;
} 
