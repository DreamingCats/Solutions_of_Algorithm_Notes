#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

const int MAXN = 50;

struct Node {
    int data;
    int h; //¸ß¶È 
    int l, r;
} nodes[MAXN];

int nodeCount = 0;

int newNode(int data) {
    nodes[nodeCount].data = data;
    nodes[nodeCount].h = 1;
    nodes[nodeCount].l = nodes[nodeCount].r = -1;
    return nodeCount++;
}

int getHeight(int root) {
    return (root==-1?0:nodes[root].h);
}

void updateHeight(int root) {
    nodes[root].h = max(getHeight(nodes[root].l), getHeight(nodes[root].r)) + 1;
}

int getBalanceFactor(int root) {
    return getHeight(nodes[root].l) - getHeight(nodes[root].r);
}

int insert(int root, int data) {
    if (root == -1) {
        return newNode(data);
    }
    if (data < nodes[root].data) {
        nodes[root].l = insert(nodes[root].l, data);
    } else {
        nodes[root].r = insert(nodes[root].r, data);
    }
    updateHeight(root);
    return root;
}

vector<int> balanceFactor;

void inOrder(int root) {
    if (root == -1) {
        return;
    }
    inOrder(nodes[root].l);
    balanceFactor.push_back(getBalanceFactor(root));
    inOrder(nodes[root].r);
}

bool isAVL=true;

int main() {
    int n, data, root = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insert(root, data);
    }
    inOrder(root);
    for (int i = 0; i < n; i++) {
        if(abs(balanceFactor[i])>1){
        	isAVL=false;
		}
    }
    
    cout<<(isAVL?"Yes":"No");
    return 0;
}
