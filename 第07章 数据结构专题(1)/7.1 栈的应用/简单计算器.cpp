#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <map>
using namespace std;

struct node{
	double num; //操作数 
	char op; //操作符 
	bool flag; //true表示操作数，false表示操作符 
}; 

string str;
stack<node> s;  //操作符栈 
queue<node> q;  //后缀表达式序列 
map<char,int> op;

void change(){  //中缀转后缀 
	double num;
	node temp;
	
	for(int i=0;i<str.length();){
		if(str[i]>='0'&&str[i]<='9'){ //是数字 
			temp.flag=true;
			temp.num=str[i++]-'0';
			while(i<str.length()&&(str[i]>='0'&&str[i]<='9')) {
				temp.num=temp.num*10+(str[i]-'0');
				i++;
			}
			q.push(temp);
		}
		else{ //如果是操作符 
			temp.flag=false;
			
			while(!s.empty()&&op[str[i]]<=op[s.top().op]){
				q.push(s.top());
				s.pop();
			} 
			
			temp.op=str[i];
			s.push(temp);
			i++;
		}
	}
	while(!s.empty()){
		q.push(s.top());
		s.pop();
	}
}

double cal(){
	double temp1,temp2;
	node cur,temp;
	
	while(!q.empty()){
		cur=q.front();
		q.pop();
		if(cur.flag==true){
			s.push(cur);
		}
		else{
			temp2=s.top().num;
			s.pop();
			
			temp1=s.top().num;
			s.pop();
			
			temp.flag=true;
			
			if(cur.op=='+'){
				temp.num=temp1+temp2;
			}
			else if(cur.op=='-'){
				temp.num=temp1-temp2;
			}
			else if(cur.op=='*'){
				temp.num=temp1*temp2;
			}
			else if(cur.op=='/'){
				temp.num=temp1/temp2;
			}
			
			s.push(temp);
		}
	}
	
	return s.top().num;
}

int main(){
	
	//优先级 
	op['+']=op['-']=1;
	op['*']=op['/']=2;
	
	while(getline(cin,str),str!="0"){
		for(string::iterator it=str.end();it!=str.begin();it--){
			if(*it==' '){
				str.erase(it);
			}
		}
		while(!s.empty()){
			s.pop();
		}
		change();
		
		printf("%.2f",cal());
		break;
	} 
	
	
	
	return 0;
} 
