#include <queue>
#include <iostream>
using namespace std;

struct Fruit{
	string name;
	int price;
	Fruit(string n,int p){
		name=n;
		price=p;
	}
	friend bool operator < (Fruit f1, Fruit f2) {
    	return f1.price > f2.price;
    }
};

int main(){
	priority_queue<Fruit> q;
	int n,price;
	string name;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>name>>price;
		q.push(Fruit(name,price));
	}
	
	Fruit topFruit=q.top();
	cout<<topFruit.name<<" "<<topFruit.price;
	return 0;
}
