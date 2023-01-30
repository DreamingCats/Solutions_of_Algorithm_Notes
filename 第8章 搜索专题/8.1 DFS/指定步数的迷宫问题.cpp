#include <iostream>
using namespace std;

const int maxn=5;
int n,m,k;
int map[maxn][maxn];
bool visited[maxn][maxn]={false};
bool canReach=false;
int step=0;

int d[4][2]={{0,1},
			{0,-1},
			{1,0},
			{-1,0}};

bool isValid(int x,int y){
	return (x>=0&&x<n) && (y>=0&&y<m) && map[x][y]==0 && !visited[x][y];
}

void DFS(int x,int y,int step){
	
	if(canReach){
		return;
	}
	
	if(x==n-1&&y==m-1){ //µ½´ïÖÕµã 
		if(step==k){
			canReach=true;
		}
		return;
	}
	
	visited[x][y]=true;
	for(int i=0;i<4;i++){
		int nextX=x+d[i][0];
		int nextY=y+d[i][1];
		if(step<k&&isValid(nextX,nextY)){
			DFS(nextX,nextY,step+1);
		}
	} 
	visited[x][y]=false;
}

int main(){
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	
	DFS(0,0,0);
	
	cout<<(canReach?"Yes":"No");
	return 0;
} 
