#include<iostream>
#define maxsize 10
using namespace std;
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int A[maxsize][maxsize];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[i][j];
            if(j<m-1){
                cout<<" ";
            }
        
        }
        if(i<n-1){
            cout<<endl;
        }
    }
    
return 0;
}
