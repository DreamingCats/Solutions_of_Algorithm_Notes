//≥≠Ã‚Ω‚¡ÀƒÛ 
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
using namespace std;

struct Node {
    int num;
    char op;
    bool isOp;
};

map<char, int> priority;

vector<Node> toNodeVector(string expr) {
    vector<Node> nodes;
    for (int i = 0; i < expr.length(); i++) {
        if (expr[i] == ' ') {
            continue;
        }
        if (expr[i] >= '0' && expr[i] <= '9') {
            Node numNode;
            numNode.isOp = false;
            numNode.num = expr[i] - '0';
            nodes.push_back(numNode);
        } else {
            Node opNode;
            opNode.isOp = true;
            opNode.op = expr[i];
            nodes.push_back(opNode);
        }
    }
    return nodes;
}

vector<Node> toPostfixVector(vector<Node> infix) {
    vector<Node> postfix;
    stack<Node> opStack;
    for (int i = 0; i < infix.size(); i++) {
        if (infix[i].isOp) {
            while (!opStack.empty() && priority[infix[i].op] <= priority[opStack.top().op]) {
                postfix.push_back(opStack.top());
                opStack.pop();
            }
            opStack.push(infix[i]);
        } else {
            postfix.push_back(infix[i]);
        }
    }
    while (!opStack.empty()) {
        postfix.push_back(opStack.top());
        opStack.pop();
    }
    return postfix;
}

int main() {
    priority['+'] = priority['-'] = 0;
    priority['*'] = priority['/'] = 1;
    string expr;
    getline(cin, expr);
    vector<Node> infix = toNodeVector(expr);
    vector<Node> postfix = toPostfixVector(infix);
    for (int i = 0; i < postfix.size(); i++) {
        if (postfix[i].isOp) {
            cout << postfix[i].op;
        } else {
            cout << postfix[i].num;
        }
        if (i < (int)postfix.size() - 1) {
            cout << " ";
        }
    }
    return 0;
}
