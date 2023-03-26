#include<iostream>
using namespace std;



int main(){
    int n;
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++){
        scanf("%d",&a[j]);
    }
    
    for (int i = 1; i <n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }

    for(int k=0;k<n;k++){
        cout<<a[k];
        if(k<n-1){
            cout<<" ";
        }
    }

    return 0;
}

