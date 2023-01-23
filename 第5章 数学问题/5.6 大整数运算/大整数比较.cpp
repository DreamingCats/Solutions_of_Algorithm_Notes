#include<iostream>
#include<cstring>
using namespace std;

char str1[1000],str2[1000];

struct bigint{
	int d[1000];
	int len;
	bigint(){
		memset(d,0,sizeof(d));
		len=0;
	}
}; 

bigint change(char str[]){
	bigint a;
	a.len=strlen(str);
	for(int i=0;i<a.len;i++){
		a.d[i]=str[a.len-i-1]-'0';
	}
	return a;
}

int compare(bigint x,bigint y){
	if(x.len>y.len){
		return 1;
	}
	else if(x.len<y.len){
		return -1;
	}
	else{
		for(int i=x.len-1;i>=0;i--){ //从高位向低位比较 
			if(x.d[i]>y.d[i]){
				return 1;
			} 
			else if(x.d[i]<y.d[i]){
				return -1;
			}
		}
		return 0; //两数相等 
	}
}

int main(){
	cin>>str1>>str2;
	bigint x=change(str1),y=change(str2);
	
	if(compare(x,y)==1){
		cout<<"a > b";
	}
	else if(compare(x,y)==-1){
		cout<<"a < b";
	}
	else{
		cout<<"a = b";
	}
	return 0;
} 
