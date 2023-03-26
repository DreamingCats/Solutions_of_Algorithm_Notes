#include <iostream>
using namespace std;

const int maxn=5;
int n,m;
int mazeMap[maxn][maxn];
bool visited[maxn][maxn]={false};
int cnt=0;

int d[4][2]={{0,1},
			{0,-1},
			{1,0},
			{-1,0}};

bool isValid(int x,int y){
	return (x>=0&&x<n) && (y>=0&&y<m) && mazeMap[x][y]==0 && !visited[x][y];
}

void DFS(int x,int y){
	if(x==n-1&&y==m-1){ //µ½´ïÖÕµã 
		cnt++;
		return;
	}
	
	visited[x][y]=true;
	for(int k=0;k<4;k++){
		int nextX=x+d[k][0];
		int nextY=y+d[k][1];
		if(isValid(nextX,nextY)){
			DFS(nextX,nextY);
		}
	} 
	visited[x][y]=false;
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mazeMap[i][j];
		}
	}
	
	DFS(0,0);
	
	cout<<cnt;
	return 0;
} 
