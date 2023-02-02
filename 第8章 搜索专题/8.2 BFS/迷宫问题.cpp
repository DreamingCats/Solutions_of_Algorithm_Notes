#include <iostream>
#include <queue>
#include <utility>
using namespace std;

const int maxn=100;

struct Node{
	int x;
	int y;
	int step;
}node,mazeBegin,mazeEnd;

int n,m;
int map[maxn][maxn];
bool inQ[maxn][maxn]={false};

int d[4][2]={{0,1},
			{0,-1},
			{1,0},
			{-1,0}};

bool isValid(int x,int y){
	return (x>=0&&x<n) && (y>=0&&y<m) && map[x][y]==0 && !inQ[x][y];
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
	
	//�����յ� 
	Node begin,end;
	mazeBegin.x=0;
	mazeBegin.y=0;
	mazeBegin.step=0;
	mazeEnd.x=n-1;
	mazeEnd.y=m-1;
	
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	
	
	
	cout<<BFS();
	return 0;
}

void BFSmodel(int s){
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		/*
		ȡ������Ԫ��top;
		���ʶ���Ԫ��top;
		������Ԫ�س���;
		��top����һ������δ����ӵĽ��ȫ����ӣ�������Ϊ�����; 
		*/
	}
}
