//前面那个01迷宫加强版 
#include <iostream>
#include <queue>
#include <utility>
#include <cstring>
using namespace std;

const int maxn=100;

struct Node{
	int x;
	int y;
	int step;
}node,mazeBegin,mazeEnd;

int n,m;
char map[maxn][maxn];
bool inQ[maxn][maxn]={false};

int d[4][2]={{0,1},
			{0,-1},
			{1,0},
			{-1,0}};

bool isValid(int x,int y){
	if(map[x][y]=='*' ){ //不能走墙，.ST可以 
		return false;
	}
	return (x>=0&&x<n) && (y>=0&&y<m) && !inQ[x][y];
}

int BFS(){
	queue<Node> q;
	q.push(mazeBegin);
	
	
	while(!q.empty()){
		Node top=q.front();
		q.pop();
		
		if(top.x==mazeEnd.x && top.y==mazeEnd.y){
			return top.step;
		}
		
		for(int k=0;k<4;k++){
			int nextX=top.x+d[k][0];
			int nextY=top.y+d[k][1];
			if(isValid(nextX,nextY)){
				node.x=nextX;
				node.y=nextY;
				node.step=top.step+1;
				q.push(node);
				inQ[nextX][nextY]=true;
			}
		} 
	}
	return -1;
}

int main(){
	cin>>n>>m;
	mazeBegin.step=0;
	
	int i,j;
	for(i=0;i<n;i++){
		//getchar();
		for(j=0;j<m;j++){
			cin>>map[i][j];
			//map[i][j]=getchar();
			if(map[i][j]=='S'){
				mazeBegin.x=i;
				mazeBegin.y=j;
			}
			else if(map[i][j]=='T'){
				mazeEnd.x=i;
				mazeEnd.y=j;
			}
		}
		map[i][m+1]='\0';
	}
	
	/*
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<map[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<mazeBegin.x<<" "<<mazeBegin.y<<endl;
	cout<<mazeEnd.x<<" "<<mazeEnd.y<<endl;
	*/
	
	cout<<BFS();
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
