#include <iostream>
#include <cstdio>
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

double eval(vector<Node> postfix) {
    stack<double> numStack;
    for (int i = 0; i < postfix.size(); i++) {
        if (!postfix[i].isOp) {
            numStack.push(postfix[i].num);
        } else {
            double num2 = numStack.top();
            numStack.pop();
            double num1 = numStack.top();
            numStack.pop();
            if (postfix[i].op == '+') {
                numStack.push(num1 + num2);
            } else if (postfix[i].op == '-') {
                numStack.push(num1 - num2);
            } if (postfix[i].op == '*') {
                numStack.push(num1 * num2);
            } if (postfix[i].op == '/') {
                numStack.push(num1 / num2);
            }
        }
    }
    return numStack.top();
}

int main() {
    priority['+'] = priority['-'] = 0;
    priority['*'] = priority['/'] = 1;
    string expr;
    getline(cin, expr);
    vector<Node> postfix = toNodeVector(expr);
    printf("%.2f", eval(postfix));
    return 0;
}
