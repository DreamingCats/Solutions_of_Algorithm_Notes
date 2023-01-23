#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
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

bigint add(bigint a,bigint b){
	bigint ans;
	int carry=0; //进位
	int n=max(a.len,b.len);
	for(int i=0;i<n;i++){
		int temp=a.d[i]+b.d[i]+carry;
		ans.d[ans.len++]=temp%10;
		carry=temp/10;
	} 
	if(carry!=0){
		ans.d[ans.len++]=carry;
	}
	return ans;
}

bigint sub(bigint a,bigint b){
	bigint ans;
	int n=max(a.len,b.len);
	for(int i=0;i<n;i++){
		if(a.d[i]<b.d[i]) { //如果不够减
			a.d[i+1]--; //向高位借位
			a.d[i]+=10; //当前位+10 
		}
	ans.d[ans.len++]=a.d[i]-b.d[i]; 	
	} 
	
	while(ans.len-1>0&&ans.d[ans.len-1]==0){
		ans.len--; //去掉高位的0，同时至少保留1位最低位 
	}
	
	return ans;
}

int main(){
	cin>>str1>>str2;
	bigint x=change(str1),y=change(str2);
	
	
	if(compare(x,y)==0){
		cout<<"0";
	} 
	else if(compare(x,y)==1){
		bigint ans=sub(x,y);
		for(int i=ans.len-1;i>=0;i--){ //输出结果 
			cout<<ans.d[i];
		} 
	}
	else{
		bigint ans=sub(y,x);
		cout<<"-";
		for(int i=ans.len-1;i>=0;i--){ //输出结果 
			cout<<ans.d[i];
		} 
	}
	
	
	return 0;
} 
