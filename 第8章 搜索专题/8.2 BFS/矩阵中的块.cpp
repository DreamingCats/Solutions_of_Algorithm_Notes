#include <iostream>
#include <queue>
#include <utility>
using namespace std;

const int maxn=100;

struct Node{
	int x;
	int y;
}node;

int n,m;
int map[maxn][maxn];
bool visited[maxn][maxn]={false};

int d[4][2]={{0,1},
			{0,-1},
			{1,0},
			{-1,0}};

bool isValid(int x,int y){
	return (x>=0&&x<n) && (y>=0&&y<m) && map[x][y]==1 && !visited[x][y];
}

void BFS(int x,int y){
	queue<Node> q;
	node.x=x;
	node.y=y;
	q.push(node);
	visited[x][y]=true;
	
	while(!q.empty()){
		Node top=q.front();
		q.pop();
		
		for(int k=0;k<4;k++){
			int nextX=top.x+d[k][0];
			int nextY=top.y+d[k][1];
			if(isValid(nextX,nextY)){
				node.x=nextX;
				node.y=nextY;
				q.push(node);
				visited[nextX][nextY]=true;
			}
	} 
	}
}

int main(){
	cin>>n>>m;
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	
	int blocks=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(map[i][j]==1 && !visited[i][j]){
				BFS(i,j);
				blocks++;
			}
		}
	}
	
	cout<<blocks;
	return 0;
}

void BFSmodel(int s){
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		/*
		取出队首元素top;
		访问队首元素top;
		将队首元素出队;
		将top的下一层结点中未曾入队的结点全部入队，并设置为已入队; 
		*/
	}
}
